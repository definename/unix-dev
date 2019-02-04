# Compile simple program

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

# Create object files and compile from object files:

This command creates object file which will be named `main.o`
```
gcc -c main.c
```

This command creates binary file with name `program`
```
gcc -o program main.o
```
