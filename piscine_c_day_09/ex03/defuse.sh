#!/bin/sh

touch bomb.txt | echo $(echo $(stat -f %a bomb.txt) -1 | bc)
