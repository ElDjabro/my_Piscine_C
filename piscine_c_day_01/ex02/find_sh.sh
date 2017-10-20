#!/bin/sh
# NF == Number of Field
# $NF == last field

find . -name "*.sh" | awk -F / '{print $NF}' | cut -d . -f 1
