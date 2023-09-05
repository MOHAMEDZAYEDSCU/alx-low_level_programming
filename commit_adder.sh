#!/bin/bash

for ((i=1; i<=60; i++))
do
    echo "Performing iteration No. $i"
    
    touch newfile_$i.txt
    
    git add .
    git commit -m "$i"
    git push

    rm newfile_$i.txt

    sleep 1  
done

  rm newfile_$i.txt
  git add .
  git commit -m "$i"
  git push

echo "Finished iteration No. $i !!"
