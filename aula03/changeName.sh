if (($# == 1)); then
	if [ -d "$1" ]; then
		cd $1
		for f in $1/*; do
			b=$(basename $f)
			mv $b new_$b
		done
	else
		echo "Não se trata de uma diretoria"
	fi
elif (($# == 2 & $2 == '-r')); then
            cd $1
            for f in $1/*; do
                    file=$(basename $f)
		    mv $file "${file#"new_"}"
            done
else
	echo "Número de argumentos inválido"
fi
