#Argumentos

if (( $#==2 )); then
	echo "Número correto de argumentos"
	case $1 in
		[0-9][0-99])
		echo "Primeiro argumento correto"
		;;
		[0-9])
		echo "Primeiro argumento correto"
		;;
		*)
		echo "Primeiro argumento tem que estar no intervalo de 0 a 99"
		;;
	esac
	case $2 in 
		"sec"*)
		echo "Segundo argumento correto"
		;;
		*)
		echo "Segundo argumento incorreto"
		;;
	esac
else
	echo "Número incorreto de argumentos"
	exit 2
fi
