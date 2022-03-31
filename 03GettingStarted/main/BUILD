cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    deps = [                    # Dependecies
        "//lib-rand:rand",      # Path relative to the Workspace
    ],
    includes = ["../lib-rand"]  # This line is created to avoid use #include "../lib-rand/rand.h" and just add #include "rand.h"
)