# Operator Graph Analyser
The analyser executable can be supplied with the following arguments:

- `path=<path>`: the path of the PGA grammar source file.
- `src=<PGA source code>`: the source code of the PGA grammar, overrides the `path` argument. 
- `templ=<path>`: the path of the template source file.
- `out=<path>`: the output path of the folder to place the results in.
- `bgraph=true|false`: true if only a base graph needs to be generated (`false` by default).
- `opt=<unsigned int>`: the optimization level of the generated code.
- `instr=true|false`: true if the generated code should be instrumented (`false` by default).
- `h1to1=true|false`: true if the one-to-one edges heuristic should be tested (`false` by default).
- `hrr=true|false`: true if the random rule heuristic should be tested (`false` by default).
- `hsto=<signed long>`: the size of the subtree order heuristic, which will be tested for a positive value (`-1` by default).
- `puid=<string>`: if supplied, the value defines a custom partitioning scheme (such as `all_cut`, `none_cut` and `designers_choice`).
- `mprocs=<signed long>`: the maximum number of matchGroups that can be executed (none given by default).
- `mmatches=<signed long>`: the minimum number of matchGroups that need to be found (none given by default).
- `mvert=<signed long>`: the maximum number of vertices to insert into the template code (1 million by default).
- `mind=<signed long>`: the maximal number of indices to insert into the template code (1.5 million by default).
- `minst=<signed long>`: the maximal number of instances to insert into the template code (5000 by default).
- `gridX=<signed long>`: the grid X to insert into to the template code (16 by default).
- `gridY=<signed long>`: the grid Y to insert into to the template code (16 by default).
- `qmem=<signed long long>`: the memory available for the template's queue in MegaBytes (`2150` MB by default)
- `isize=<signed long long>`: the size of items in the queue (`96`by default).
- `htspects=<double>, <unsigned int>, <double>`: defines the errorMargin, confidenceLevel, and standard deviation of the heuristic tests (by default `4.0, 1, 0.5`).
- `rsampl=<unsigned int>`: random sampling size (`0` by default).
- `seed=<signed long>`: the seed of the generator. If it is below 0, the system clock will be used (default behavior).
- `tech=<unsigned int>`: the technique to insert into the template code: `KERNELS=0, DYN_PAR=1, MEGAKERNEL=2, MEGAKERNEL_LOCAL_QUEUES=3` (`MEGAKERNEL` by default).