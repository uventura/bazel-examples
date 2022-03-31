# Using GTest Without Test Mode From Bazel

This way to use GTest gives you more control over the library itself.

The example was made with a base interface, and the objective is to test an implementation example, that you can find in ```testing/TestSpecialMath.cc```.

> Hint: Read the files from ```testing``` folder to understand about the topic.

## How to Build

```bazel build //testing:math-mock```

## How to Run

- **Windows**: ```.\bazel-bin\testing\math-mock.exe```
- **Linux**: ```./bazel-bin/testing/math-mock```