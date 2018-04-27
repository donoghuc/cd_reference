# Reference 
The purpose of this repo is to collect little bits of info for my own quick reference

## my ubuntu 16.04 (LTS) setup! 
```
# get curl
sudo apt-get install curl

# get minconda
curl -LO https://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
bash Miniconda3-latest-Linux-x86_64.sh -p ~/miniconda -b
rm Miniconda3-latest-Linux-x86_64.sh 
echo "export PATH=~/miniconda/bin:\$PATH" >> ~/.bashrc
source ~/.bashrc

# get sublime text 3
wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
sudo apt-get update

# set up first virtualenv
mkdir working_dir
cd working_dir/
virtualenv -p /home/cas/miniconda/bin/python --no-site-packages ocr
source ocr/bin/activate

# get git
sudo apt-get install git

# pytesseract and opencv 
sudo apt-get install tesseract-ocr
pip install pytesseract

# osu virtual machine
https://oregonstate.app.box.com/v/vmrc
cas@ubuntu:~/Downloads$ chmod +x VMware-Remote-Console-10.0.2-7096020.x86_64.bundle 
cas@ubuntu:~/Downloads$ sudo ./VMware-Remote-Console-10.0.2-7096020.x86_64.bundle
```

# for puppet lab
from https://www.ubuntu.com/download/desktop/contribute?version=16.04.4&architecture=amd64 iso
## after boot
```
sudo apt-get update && sudo apt-get upgrade
sudo apt-get install emacs
sudo apt-get install git
sudo apt-get install curl
```
## emacs config
add https://github.com/donoghuc/emacs_config to ~/.emacs.d

# more install notes
```
#!/bin/bash

# update new machine
apt-get -y update && apt-get -y upgrade

# install bolt to do the rest! 
apt-get install -y make gcc ruby-dev
gem install bolt
```
```
#!/bin/bash

# get some basic tools
apt-get install -y git
apt-get install -y curl

# set up emacs
apt-get install -y emacs
git clone https://github.com/donoghuc/emacs_config.git ~/.emacs.d

# install docker and docker compose
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | apt-key add -

add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable"

apt-get update

apt-get install -y docker-ce

curl -L https://github.com/docker/compose/releases/download/1.18.0/docker-compose-`uname -s`-`uname -m` -o /usr/local/bin/docker-compose

chmod +x /usr/local/bin/docker-compose
```

