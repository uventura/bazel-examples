# Include Libraries From Another Folder #02

> Hint: Read the BUILD files to understand about libraries structure.

More information you can find [here](https://bazel.build/tutorials/cpp-use-cases).

Inside the ```BUILD``` file, you will notice a field called ```copts```, to understand the purpose [click here](https://docs.bazel.build/versions/main/be/c-cpp.html#cc_binary).

# How to Build

```bazel build :mainproject```

# How to Run

- **Windows**: ```.\bazel-bin\mainproject.exe```
- **Linux**: ```./bazel-bin/mainproject```