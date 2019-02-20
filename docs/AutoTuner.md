# Auto Tuner
The auto tuner python script can be supplied with the following arguments:

- `pipeline_config=<path>`: the path of the pipeline configuration file.
- `from_stage=<string>`: from which stage to start the tuner: `generatePartitions`, `prepareWorkspaces`, `compile`, `findMaxNumAxioms`, `run`, `processResults` or `saveToDatabase`.
- `to_stage=<string>`: to which stage the tuner should go (see above).
- `stage=<string>`: the stage to perform (see above).
- `scene_config=<path>`: the path of the scene configuration file.
- `partitions_indices=<integer>, <integer>, ..., <integer>`: partition indices (all by default).
- `ignored_partitions=<integer>, <integer>, ..., <integer>`: ignored partition indices (none by default).
- `start_partition=<integer>`: starting partition (`0` by default).
- `end_partition=<integer>`: ending partition (none defined by default).
- `puids=<string>, <string>, ..., <string>`: specific partitions that need to be generated (none by default).
- `skip_compilations=<integer>`: how many partitions should be skipped when compiling, starting from the first partition. (none by default).
- `recover_max_num_axioms=true|false`: true if the maximum number of axioms should be recovered from a previous run (`false` by default).
- `force_max_num_axioms=true|false`: true if the global maximum number of axioms should be forced to the scene's maximum (`false` by default).
- `skip_runs=<integer>`: how many partitions should be skipped when running, starting from the first partition. (none by default).