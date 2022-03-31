# Creating Tests and Including External Bazel Projects

To understand how to create, look ```test/BUILD```, ```test/hello-test.cc```,```main/BUILD```.

More information about you can find [here](https://google.github.io/googletest/quickstart-bazel.html)

## How to Build

- **Without explicit output**: ```bazel test //test:hello-test```
- **Show test output**: ```bazel test --test_output=all //test:hello-test```

> Another way to use gtest is in the next folder.