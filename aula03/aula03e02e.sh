
if (($1>5 && $1<10)); then
	echo "Número maior do que 5 e menor do que 10"
elif (($1<5)); then
	echo "Número menor do que 5"
else
	echo "Tchupa"
fi
