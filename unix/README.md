# Reference for linux/unix system stuff

## tar gzip
```
# compress directory
tar -cvzf tarballname.tar.gz dir

# extract
gunzip filename.tar.gz
tar -xvf filename.tar
```
## scp directory
```
# for remote: user@remote:/path/to/dir
scp -r from to
```
## file permissions
```
7 = 4+2+1 (read/write/execute)
6 = 4+2 (read/write)
5 = 4+1 (read/execute)
4 = 4 (read)
3 = 2+1 (write/execute)
2 = 2 (write)
1 = 1 (execute)

chmod 600 file_or_dir
```
