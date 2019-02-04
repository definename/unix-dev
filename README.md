# Compile simple program

In general `cc` it is alias for gcc:
```
cc main.c
```

Directly use `gcc`:
```
gcc main.c
```

Set the name of the output binary file with `-o` flag:
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
