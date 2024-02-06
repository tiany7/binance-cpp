cc_import(
    name = "ssl",
    hdrs = [],
    shared_library = "libssl.so",
    visibility = ["//visibility:public"],
)

cc_import(
    name = "curl",
    hdrs = [],
    shared_library = "libcurl.so.4",
    visibility = ["//visibility:public"],
)
cc_library(
    name = "binance_lib",
    srcs = glob(["binance/*.cpp"]),
    hdrs = glob(["binance/*.h"]),
    deps = [
            "@json_lib//:json",
            ":ssl",
            ":curl",
            ],
    visibility = ["//visibility:public"],
    copts = ["-I/usr/include/boost", "-std=c++17"],
    linkopts = ["-lssl", "-lcrypto", "-lpthread", "-lcurl", "-L/usr/include/boost/lib", "-lboost_system", "-lrt", "-lboost_thread",],
    alwayslink = True,
)

cc_binary(
    name = "binance",
    srcs = ["main.cpp"],
    deps = [":binance_lib"],
    visibility = ["//visibility:public"],
)
