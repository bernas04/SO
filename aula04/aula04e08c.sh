if (( $# != 1 )); then
	echo "Número incorreto de argumentos!"
	exit 2
else
	ficheiro=( $(cat $1) )
	for ((i = 0; i < ${#ficheiro[@]}; i++)); do
		for ((j = i+1; j < ${#ficheiro[@]}; j++)); do
			if (( ${ficheiro[j]} < ${ficheiro[i]})); then
				ti=${ficheiro[i]}
				tj=${ficheiro[j]}
				ficheiro[i]=$tj
				ficheiro[j]=$ti
			fi
		done
	done
fi

for i in ${!ficheiro[@]}; do
	echo "$(($i+1)): ${ficheiro[i]}"
done


