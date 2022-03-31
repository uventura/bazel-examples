# The BUILD file doesn't need always be in a folder.

cc_binary(
    name = "mainproject",
    srcs = ["main.cpp"],
    deps = [
        "//libs/lib01:special-lib",
        "//libs/lib02:random-lib"
    ],
    includes = ["libs/lib01/include", "libs/lib02/include"]
)