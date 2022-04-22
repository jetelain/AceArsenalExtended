
#include "script_component.hpp"

params ["", "", "_params"];
_params params ["_player", "_layout", "_actionLabel", "_config"];

private _callback = {
		params ["_args"];
		_args params ["_player", "_layout", "", "_config", "_giveBack", "_consume"];

		private _insignia = [_player] call BIS_fnc_getUnitInsignia;
		// setUnitLoadout will clear insignia, but BIS_fnc_setUnitInsignia does
		// not known about this and would ignore the next call
		[_player, ""] call BIS_fnc_setUnitInsignia;

		private _loadout = getUnitLoadout _player;

		_layout params ["", "_loadoutIndex", "_loadoutSecondary"];

		if ( _loadoutSecondary == -1 ) then {
			_loadout set [_loadoutIndex, _config];
		} else {
			(_loadout select _loadoutIndex) set [_loadoutSecondary, _config];
		};

		// setUnitLoadout causes NVGs to turn off.
		// Let's figure out if the player was using NVGs and set the
		// state again after setting the loadout.
		private _nvgState = currentVisionMode _player;

		// setUnitLoadout causes TFAR backpacks to lose settings.
		// Before setting the player's loadout, let's grab their TFAR radio
		// settings so we can copy the settings to the "new" radio bag.
		// TFAR code snippets were adapted from TFAR_fnc_CopySettings.
		// Init variables
		// systemChat "Changed Gear";
		private _playerBag = (_loadout select 5) select 0;
		private _tfarSource = [];
		private _lrSettingsSource = [];

		// Check if TFAR is active		
		private _tfarIsActive = isClass (configFile >> "CfgPatches" >> "tfar_core");
		if (_tfarIsActive) then
		{
			// systemChat "TFAR Active - 1";
			// Check if player has backpack and backpack is TFAR radio
			// Set source and destination bags

			if ([_playerBag] call TFAR_fnc_isLRRadio) then
			{
				// systemChat "Player Bag is Radio - 2";
				_tfarSource = _player call TFAR_fnc_backpackLr;
				_lrSettingsSource = _tfarSource call TFAR_fnc_getLrSettings;
				// systemChat format ["Source: %1", _lrSettingsSource];
			};
		};

		_player setUnitLoadout _loadout;

		[_player] call EFUNC(gearinfo,applyTextureOptions);

		[_player, _insignia] call BIS_fnc_setUnitInsignia;

		// Why would we make someone stand up?
		// What if they are laying down to avoid fire?
		/*
		if ( currentWeapon _player != "" ) then {
			_player playMoveNow "amovpercmstpslowwrfldnon";
		};
		*/

		if ( _consume != "" ) then { 
			_player removeItem _consume;
		};
		if ( _giveBack != "" ) then { 
			_player addItem _giveBack;
		};

		// Check if TFAR is active		
		if (_tfarIsActive) then
		{
			// Check if player has backpack and backpack is TFAR radio
			// systemChat "TFAR Active - 3";
			private _newLoadout = getUnitLoadout _player;
			_playerBag = (_newLoadout select 5) select 0;

			if ([_playerBag] call TFAR_fnc_isLRRadio) then
			{
				// systemChat "Player Bag is Radio - 4";
				private _tfarDestination = _player call TFAR_fnc_backpackLr;
				[_tfarDestination,[]+_lrSettingsSource] call TFAR_fnc_setLRSettings;
				// systemChat "LR Radio Set - 5";
			};
		};

		// Check if player has NVGs. If they do and they were using them, turn back on.
		// We also need to make sure that whatever is in the NVG slot has NVG capabilities.
		private _nvgItem = hmd _player;
		private _hasNVGs = (_nvgItem != "");
		private _canNVG = "NVG" in (getArray (configFile >> "CfgWeapons" >> _nvgItem >> "visionMode"));
		if (_hasNVGs && {_canNVG && {_nvgState > 0}}) then
		{
			_player action ["nvGoggles", _player];
		};

	};

	// ace_common_fnc_progressBar does not function while a player is in a vehicle.
	// To get around this, we will execute the progress bar only while on foot.
	// While in a vehicle, we will simply wait 2 seconds before swapping player items.
	private _isOnFoot = isNull objectParent _player;
	if (_isOnFoot) then
	{
		[2, _params, _callback, {}, _actionLabel + "..."] call ace_common_fnc_progressBar;
	} else {
		[_params,_callback] spawn {
			params ["_params","_callback"];			
			sleep 2;
			[_params] call _callback;
		};
	};