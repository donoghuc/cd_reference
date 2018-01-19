# C reference

### gcov basics

```
# compile with coverage flags
gcc -0 executable_name source.c -coverage -fpic -lm

#execute
./executable_name

 # now look at gcov stuff
 gcov source.c -b 
```

### test_prog.c
this has some really basic c syntax that i find myself looking up after being in python land all the time
```
# compile it like this
gcc -o test_prog test_prog.c
```
