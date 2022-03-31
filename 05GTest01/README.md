# Creating Tests and Including External Bazel Projects

To understand how to create, look ```test/BUILD```, ```test/hello-test.cc```, ```main/BUILD``` and ```WORKSPACE```

More information about you can find [here](https://bazel.build/tutorials/cpp-use-cases) and [here](https://google.github.io/googletest/quickstart-bazel.html).

> Hint: In ```WORKSPACE``` you get the repository, but there are other ways to do that, you find [here](https://bazel.build/rules/lib/repo) and [here](https://bazel.build/reference/be/workspace).

## How to Build

- **Without explicit output**: ```bazel test //test:hello-test```
- **Show test output**: ```bazel test --test_output=all //test:hello-test```

> Another way to use gtest is in the next folder.