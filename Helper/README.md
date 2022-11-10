# ACE Arsenal Extended Config Helper

The **Config Helper Application** is a tool designed to generate ACEAX configuration from an existing mod. 

It analyze mod configuration files to detect Arsenal entries that have the same 3D model but different textures. 

It allow to "map" a texture slot (=hiddenselection) to an option, and each texture to a value of that option.

## Step 1 : Get mod configuration files

### Not obfuscated PBO

If the mod PBO are not obfuscated, you will be able to directly use PBO files of the mod directly in the tool.

### Obfuscated PBO

Otherwise, you will have to extract the configuration file hidden in the PBO. 
  - You can use my [PBO Explorer tool](https://github.com/jetelain/PboExplorer),
    1. Look at `config.cpp` to identify data file (Foe example, `#include ...xà*ùџ.ogg..` means config is hidden in `xà*ùџ.ogg`, some invalid caracters may appears in the name, but they have to be ignored)
	2. Extract the file found in `config.cpp` (`xà*ùџ.ogg` according to previous example) to `name_of_the_pbo.cpp` to a dedicated directory
  - You also dump configuration in-game using a script.


## Step 2 : Launch tool and load configuration files

Launch the tool, in the menu "File" go to "Open config file...", then select all wanted files (non obfuscated PBO, BIN or CPP files).

If you load CPP files, or use a PBO with cpp files, you will need to have Arma3 Tools installed to allow the tool to parse config files.

Tool will parse files and show you an automatic mapping. 

Current version automatic mapping is based on USP conventions and may generate generate wrong suggestions.


## Step 3 : Map and resolve conflicts


## Step 4 : Generate config


## Step 5 : Customize config

