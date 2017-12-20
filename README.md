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
## docker proxy
```
# when using docker build and you dont want to mess with passing proxy shit to curl etc
docker build -f Dockerfile --network=host -t image_tag ./path/to/dockerfile
# when starting container
docker run -ti image_tag --net=host
```
## docker volume
```
docker volume create volume_name
```

## murder all docker images/containers/volumes/ps
```
# get rid of images "easy" to remove
docker rm $(docker images) -f
# now kill off the "hard" ones
docker rm $(docker ps -aq)
# remove volumes
docker volume rm $(docker volume ls -q)
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

## Python directory creation 
```
# make a directory if there is not one (avoid race condition described in 
# https://stackoverflow.com/questions/273192/how-can-i-create-a-directory-if-it-does-not-exist/14364249#14364249
test_path = pathlib.Path(os.path.join('example', 'path))
if not test_path.is_dir():
    test_path.mkdir(exist_ok=True)
 ```
