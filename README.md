# `one-file`

## Simple program compilation

In general `cc` it is alias for gcc, this command creates binary file with name `a.out`:
```
cc main.c
```

Directly use `gcc`:
```
gcc main.c
```

Sets the name of the output binary file with `-o` flag and creates binary file with given name `program`:
```
gcc -o program main.c
```

## Create object files and compile from object files:

This command creates object file which will be named `main.o`
```
gcc -c main.c
```

This command creates binary file with name `program`
```
gcc -o program main.o
```

# `separate-compilation`

## Separate compilation

Since headers `*.h` and sources `*.c` are located in different folders we need to tell `gcc` compiler where to find includes. In order to do that we need to add `-I../include` flag.

Creates object files `main.o`, `util.o`
```
gcc -c main.c -I../include
gcc -c util.c -I../include
```

Creates binary file `program`
```
gcc -o program main.o util.o
```

## Run preprocessor

```
gcc -E main.c -I../include
```

## Compile with preprocessor definition

Creates object files `main.o`, `util.o` and binary file with name `program`
```
gcc -c main.c -I../include
gcc -c util.c -I../include -DHELLO
gcc -o program main.o util.o
```

# `make-sample`

You just need to trigger `make`

## gdb - GNU Debugger

In order to turn on debug support for your program you need to compile it with flag `-g` to allow writing debug information into binary file.

- Starts debuger: `gdb hello`
- Sets breakpoint on line 10 in file main.cpp: `break main.cpp:10`
- Runs program: `run`
- Prints value `var`: `print var`
- Goes to another breakpoint: `continue`
- Deletes all breakpoints: `delete breakpoints`

# `autoconf`

## xz - zip/unzip

- Decompress `xz -dvk ./coreutils-8.9.tar.xz`
- Compress `xz -zvk ./coreutils-8.9.tar`


## tar - pack/unpack

- List the content of an archive: `tar -tvf ./coreutils-8.9.tar.xz`
- Create a new archive: `tar -cvf ar.tar file file file`
- Extract files from an archive: `tar -xpvf ./coreutils-8.9.tar.xz`

## Build project from sources

To generate MakeFile from MakeFile.in we need to invoke `./configure`, `--prefix` option tells where to install file with `make install` command:

`./configure --prefix=$HOME/mycore`

To build sources use:

`make`

To check whether `make install` command works correctly:

`make -n install`

To install sources into destination directory which was set with `--prefix` option:

`make install`

## Install with package tool

Alternative way to install package in your system is to use `checkinstall` tool. Instead of `make install` we can use `checkinstall` tool to created `*.deb` package and install it with `dpkg`. In order to do that we need to invoke following command from the directory where `./configure` file is located:
```
sudo checkinstall --pkgname=core83 --default make install
```

- `--default` - accepts default answers to all questions
- `--pkgname` - sets package name

As result that command creates `core83_8.30-1_amd64.deb` packages and installs it in system. All sources will be available in `$HOME/core83`

In order to check whether `core83_8.30-1_amd64.deb` packahe was installed type `dpkg -l | grep core83`

In order to remove it from system type: `sudo dpkg -r core83`

In order to install it from `*.deb` package type: `sudo dpkg -i ./core83_8.30-1_amd64.deb`

In order to list all files which were installed with package `core83_8.30-1_amd64.deb` type: `dpkg -L core83`
