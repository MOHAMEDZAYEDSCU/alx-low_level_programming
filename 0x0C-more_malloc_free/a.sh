#!/bin/bash

read -p "Enter your commit :" commit
git add .
git commit -m "$commit"
git push
