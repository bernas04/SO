#!/bin/bash
# For all the files in a folder, show the properties
if (($#==1)); then
	if [ -d "$1" ]; then
		for f in $1/*; do
			file "$f"
		done
	else
		echo "O argumento passado não é diretório"
	fi
else
	echo "Número incorreto de argumentos"
fi
