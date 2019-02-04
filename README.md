# `one-file`

## Simple program compilation

In general `cc` it is alias for gcc, with command creates binary file with name `a.out`:
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
