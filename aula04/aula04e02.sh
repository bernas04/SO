#1/bin/bash
function numeric_to_string()
{
	case "$1" in
		1)
			echo "Um"
			return 1
			;;
		2)
			echo "Dois"
			return 2
			;;
		3)
			echo "Três"
			return 3
			;;
		*)
			echo "Outro número"
			return $1
			
	esac
}

function compare()
{
	if (($1>$2)); then
		return $1
	elif (($1<$2)); then
		return $2
	else
		return 0
	fi
}

echo "Insira dois números!"
read primeiro
read segundo
	compare $primeiro $segundo
	a=$?
	if (( $a==$primeiro )); then
		echo "$primeiro > $segundo"
	elif (( $a==$segundo )); then
		echo "$segundo > $primeiro"
	else
		echo "$primeiro = $segundo"
	fi

