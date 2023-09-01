#!/bin/bash
read -p "Enter you commit: " commit
git add .
git commit -m "$commit"
git push
