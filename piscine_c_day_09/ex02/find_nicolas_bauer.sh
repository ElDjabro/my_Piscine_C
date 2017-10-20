#!/bin/sh

if [ $1 = "phonebook" ]
then
	cat $1 | grep -i "nicolas   bauer" | awk  '{print ($NF - 1)}'

fi
