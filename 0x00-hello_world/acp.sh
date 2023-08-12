#!/bin/bash

git add .
read -p "Enter your commit: " commit
git commit -m "$commit"
git push
