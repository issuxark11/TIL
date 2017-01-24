## git guide
```shell
git install
# sudo apt-get install git

git configuration
# git config --global user.name "id"
# git config --global user.email "email@gmail.com"
# git config --global color.ui "auto"
# git config --list

git init
# start version control. initialize repository. create '.git' 

git clone "https://github.com/remote"
# clone remote repository

work flow
# Wording directory
# Index
# HEAD

git status
# check version control state

git add *
# add all modified files to Index

git commit -m "first commit"
# commit modified files to HEAD

git push origin master
# upload HEAD to remote repository

git remote add origin "remote repository address"


