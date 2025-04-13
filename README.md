This repository contains standalone programs to demonstrate a feature or concept.

> For assembly and systems programming concepts, refer to my [sheharyaar/systems-assembly](https://github.com/sheharyaar/systems-assembly) repository.

### List of Programs

1. unshare
   1. [unshare-files](./unshare/unshare-files.c): demonstrates `CLONE_FILES` flag for unshare. This flag creates a seperate copy of descriptor table so that the other processes doen't affect the file descriptors on this one.
   2. [unshare-fs](./unshare/unshare-fs.c): demonstrates `CLONE_FS` flag for unshare. This flag seperates current working directory, directory attributes, etc. from other processes.
   3. [unshare-pid](./unshare/unshare-pid.c): demonstrates `CLONE_NEWPID` flag for unshare. This flag creates the first **child** process to pid 1 which acts as `init` for that namespace.

2. gcc-attributes
   1. [constructor.c](./gcc-attributes/constructor.c): demonstrated the use of `constructor` and `destructor` GCC attributes.
   2. [constructor-hook.c](./gcc-attributes/constructor-hook.c): expands on the previous example to use constructor with `LD_PRELOAD` to hook libc function.
   3. [noreturn.c](./gcc-attributes/noreturn.c): demonstrates `noreturn` GCC attribute and C11 feature.
   4. [unused.c](./gcc-attributes/unused.c): demonstrates `unused` GCC attribute.

3. golang
   1. [init-func.go](./golang/init-func.go): demonstrates the use of `init` function in Go.
   2. [multiple-return-values.go](./golang/multiple-return-values.go): demonstrates the use of multiple return values in Go.
   3. [struct-tags.go](./golang/struct-tags.go): demonstrates the use of struct tags in Go.
   4. [json-structs.go](./golang/json-structs.go): demonstrates the use of JSON structs in Go.
   5. [happpens-before.go](./golang/happens-before.go): demonstrates the concurrency concept of `happens-before` in Go.
