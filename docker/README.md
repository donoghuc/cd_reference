# Docker reference

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
