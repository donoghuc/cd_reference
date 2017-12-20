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
scp -R from to
```
