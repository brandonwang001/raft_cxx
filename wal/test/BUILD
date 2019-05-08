cc_binary(
    name = "wal_test",
    srcs = [
        "main.cc",
        "wal_stream_test.cc",
    ],
    deps = [
        "//wal/src:wal",
    ],
    linkopts = [
        "-lgtest",
    ],
    visibility = ["//visibility:public"],
)
