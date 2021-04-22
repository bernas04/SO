#!/bin/bash
#This script checks the existence of a file
if (($#==0 || $#>1)) ; then
	echo "Argumentos inválidos"
else
	echo "Checking"
	if [[ -f $1 ]] ; then
		echo "$1 existe."
		if [[ -r $1  &&  -x $1  &&  -w $1 ]] ; then
			echo "This file has reading, writing and executing permissions"
		elif [[ -r $1 && -x $1 ]] ; then
			echo "Reading and executing permissions"
		elif [[ -r $1 && -w $1 ]] ; then
			echo "Reading and writing permissions"
		elif [[ -w $1 && -x $1 ]] ; then
			echo "Writing and executing permissions"
		elif [[ -r $1 ]] ; then
			echo "Just reading permission"
		elif [[ -w $1 ]] ; then
			echo "Just writing permission"
		else
			echo "Just executing permission"
		fi
	else
		echo "$1 não existe"
	fi
	echo "...done."
fi
