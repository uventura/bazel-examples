# Pre-Compiled Libraries

This example has the purpose to show how include precompiled headers(.lib, .so, ...) trying to run a Python code with C++.

If you see the ```BUILD``` file, will notice that you have a ```static library```, and is enough to include.

See about [cc_import](https://bazel.build/reference/be/c-cpp#cc_import) to understand about other include ways.

> Hint 1: Don't forget that to create a static inclusion you need the headers.

> Hint 2: The code used isn't the best practice to adopt, if you want to know about the subject [click here](https://bazel.build/docs/best-practices).

## How To Build

```bazel build :main```

## How To Run

- **Windows**: ```.\bazel-bin\main.exe```
- **Linux**: Isn't a Linux implementation, because uses ```.lib``` file from Windows.