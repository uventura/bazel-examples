cc_library(
    name = "hello-custom",          # Library name
    srcs = ["hello-custom.cc"],     # Sources used
    hdrs = ["hello-custom.h"],      # Headers used
)

cc_binary(
    name = "hello",
    srcs = ["hello.cc"],
    deps = [                        # Dependencies
        ":hello-custom"
    ],
)