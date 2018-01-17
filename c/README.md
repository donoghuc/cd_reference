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
