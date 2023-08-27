#!/bin/bash

for ((i=1; i<=99; i++))
do
    echo "Performing iteration $i"
    
    touch newfile_$i.txt
    
    git add .
    git commit -m "commit no $i"
    git push
    rm newfile_$i.txt

    sleep 5
done

  rm newfile_$i.txt
  git add .
  git commit -m "commit no $i"
  git push

echo "Finished !!"
