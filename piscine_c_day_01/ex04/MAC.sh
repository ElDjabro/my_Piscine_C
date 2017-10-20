#!/bin/sh

#Écrire une ligne de commande qui affiche les adresses MAC de votre machine. 
#Chaque adresse sera suivi d’un retour à la ligne.

ifconfig | grep ether | awk -F ether '{print $NF}' | tr -d ' '
