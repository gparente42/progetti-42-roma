#! /bin/sh

# 3 steps  - 1 find all files ending .sh and removing the ./ from it 2 stream editor removing the end of each file .sh
ls -R | grep ".sh$" | sed 's/\.sh$//'
