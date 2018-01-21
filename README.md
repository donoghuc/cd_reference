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

