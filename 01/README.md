# Notes:

- ```WORKSPACE``` is used to create the root directory and its rules.
- ```BUILD``` is used to define how to compile a specific part of the project.
- Paths relative to ```WORKSPACE``` file is referenced with "//" at beggining.Example:
    - ```//main``` is the main folder path.

More information you can find [here](https://bazel.build/tutorials/cpp)

## How to build the target?

```bazel build //main:buildname```

## How to run?
- **Windows**: ```.\bazel-bin\main\buildname.exe```
- **Linux**: ```./bazel-bin/main/buildname```

> The binary created from build file is in ```bazel-bin``` folder, if your build target is in a folder, in ```bazel-bin``` will be created a subfolder with its name.