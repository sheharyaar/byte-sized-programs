This repository contains standalone programs to demonstrate a feature or concept.

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
