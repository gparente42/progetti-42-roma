#!/bin/sh

# Set FT_USER to bocal and print groups
id -Gn $FT_USER | tr ' ' ',' | tr --delete '\n'
