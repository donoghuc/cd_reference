# Python reference

## Python directory creation 
```
# make a directory if there is not one (avoid race condition described in 
# https://stackoverflow.com/questions/273192/how-can-i-create-a-directory-if-it-does-not-exist/14364249#14364249

import pathlib
import os
test_path = pathlib.Path(os.path.join('example', 'path))
if not test_path.is_dir():
    test_path.mkdir(exist_ok=True)
 ```
## virtualenv
```
# create new virtual env directory
# the -p is path to python interpreter you want
virtualenv -p /home/cas/miniconda/bin/python [env name]

# start virtual env
source [path to env dir]/bin/activate

# exit virtual env
deactivate

# remove virutal env
rm -rf [virtual env dir]
```
