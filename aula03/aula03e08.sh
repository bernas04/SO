#!/bin/bash
#select structure to create menus
echo "Choose PS3: "
read PS3

select arg in $@; do
	case $REPLY in
		[1-$#])
			echo "You picked $arg ($REPLY)."
			;;
		*)
			echo "Wrong choice"
			exit 2
			;;
	esac
done 
