cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    deps = [
        "//lib-rand:rand",
    ],
    includes = ["../lib-rand"]  # This line is created to avoid use #include "../lib-rand/rand.h" and just add #include "rand.h"
)