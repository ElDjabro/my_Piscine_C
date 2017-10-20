#!/bin/sh
#---------------------------------------------------------
#Indique le groupe de la variable d environnemet FT_USER
#Utiliser 'tr' pour remplacer les espaces par des virgules

groups $FT_USER | tr ' ' ',' | tr -d '\n'
