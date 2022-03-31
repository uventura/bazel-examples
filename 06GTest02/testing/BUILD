# Library used to make tests
cc_library(
    name = "special-math",
    srcs = ["TestSpecialMath.cc"],
    hdrs = ["TestSpecialMath.h"],
    deps = [
        "@gtest//:gtest_main",
        "//interfaces:ispecial-math"
    ],
    includes = ["../interfaces"]
)

cc_binary(
    name = "math-mock",
    srcs = ["main.cc"],
    deps = [
        ":special-math",
        "@gtest//:gtest_main"
    ]
)