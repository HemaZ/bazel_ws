# bazel_ws
Bazel Workspace with C++ libs, tests, and executables examples

## How to build

* `bazel build` builds everything
* `bazel build //apps/app1` Builds an example executable.
* `bazel build //libs/lib1` Builds an example lib1.
* `bazel test //test/lib1_test` Builds and run a Google Test for lib1.
