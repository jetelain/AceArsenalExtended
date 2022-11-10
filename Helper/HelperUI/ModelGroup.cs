using System;
using System.Collections.Generic;
using System.Linq;

namespace HelperUI
{
    internal class ModelGroup
    {
        private readonly List<ModelViewModel> models;
        private readonly RootViewModel root;

        public ModelGroup(RootViewModel root, IEnumerable<ModelViewModel> models)
        {
            this.models = models.ToList();
            this.root = root;
        }

        public ModelGroup(RootViewModel root, string modelName)
            : this(root, root.Models.Where(m => m.Action != ModelAction.Ignore && string.Equals(m.ModelName, modelName)))
        {

        }

        internal bool IsGroup => models.Count > 1;


        internal void AddOption()
        {
            foreach (var model in models)
            {
                model.Options.Add(new ModelOptionsViewModel(model, ModelOptionsViewModel.NewOptionName, false, string.Empty));
            }
            root.MetadataService.Save();
        }

        internal void RenameOption(string oldName, string newName)
        {
            foreach (var model in models)
            {
                var option = model.Options.FirstOrDefault(o => string.Equals(o.Name,oldName, StringComparison.OrdinalIgnoreCase));
                if (option != null)
                {
                    if (string.IsNullOrEmpty(newName))
                    {
                        model.Options.Remove(option);
                    }
                    else
                    {
                        option.SetName(newName);
                    }
                }
                model.SetMetadataOnly();
            }
            root.MetadataService.Save();
        }

        internal void Init()
        {
            if (!IsGroup)
            {
                return;
            }

            var mappedOptions = models.SelectMany(o => o.GetMappedOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
            var allOptions = models.SelectMany(o => o.GetInitialOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();

            foreach (var model in models)
            {
                model.ComputeModelLevelOptions(allOptions, mappedOptions);
            }
        }

        internal void UpdateOptions()
        {
            if (!IsGroup)
            {
                if (models.Count > 0)
                {
                    models[0].ResetModelLevelOptions();
                }
                return;
            }

            var mappedOptions = models.SelectMany(o => o.GetMappedOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
            var allOptions = models.SelectMany(o => o.GetAllOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();

            foreach (var model in models)
            {
                model.ComputeModelLevelOptions(mappedOptions, mappedOptions);
            }
        }
    }
}
