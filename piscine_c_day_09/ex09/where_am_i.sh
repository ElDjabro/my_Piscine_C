#!/bin/sh

var=$(ifconfig | grep -i "inet" | grep "netmask" | awk -F netmask '{print $1}' | awk -F inet '{print $2}' | tr -d ' ')
if [[ $var ]]
	then
		echo $var | tr " " "\n"
	else
		echo "Je suis perdu!"
fi
