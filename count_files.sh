#! /bin/sh

#Find all files and directories and counts it including the current directory
find . -type f -o -type d | wc -l
