#!/bin/sh
#affiche un ls -l une ligne sur deux, à partir de la première
ls -l | awk 'NR% 2 {print}'
