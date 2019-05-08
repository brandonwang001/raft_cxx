cc_library(
    name = "wal",
    srcs = [
        "wal_stream.cc",
    ],
    hdrs = [
        "wal_stream_inf.h",
        "wal_stream.h",
    ],
    deps = [
        "//wal/idl:wal_cc_proto",
        "//wal/common:wal_common",
    ],
    copts = [
    ],
    linkopts = [
        "-lrocksdb",
        "-lglog",
        "-lgflags",
        "-lprotobuf",
    ],
    visibility = ["//visibility:public"],
)
