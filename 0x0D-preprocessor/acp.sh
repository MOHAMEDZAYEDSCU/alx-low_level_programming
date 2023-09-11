#/bin/bash

read -p "enter your commit :" commit

git add .
git commit -m "$commit"
git push
