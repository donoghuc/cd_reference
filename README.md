# Reference 
The purpose of this repo is to collect little bits of info for my own quick reference

for now everything will go in this one main readme, eventually I will organize by topic

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
## docker build
```
docker build -f Dockerfile -t image_name path/to/dir/containing/dockerfile
```
## docker run
```
# interactive terminal, no exposed ports or volumes
docker run -ti image_name

# with port forwarding and docker volume
docker run -ti -p host_port:container_port -v volume_name:path_to_dir_in_container image_name
```

## docker volume
```
docker volume create volume_name
```
## pandas diff
```
import pandas as pd
a = pd.DataFrame(dict(a=[1,2,3], b=[3,2,1]))
b = pd.DataFrame(dict(a=[1,2,3], b=[3,2,1]))

dif = a.merge(b,indicator=True,how='outer')
len(dif[dif['_merge'] != 'both'])
```
## pytest
run specific test function, show stdout and print verbose
```
pytest module.py::test_function -s -vv
```
