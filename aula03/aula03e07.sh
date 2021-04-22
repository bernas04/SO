#!/bin/bash
# Calculate the sum os a series of numbers.

SCORE="0"
SUM="0"
NUMBER="0"
while true; do
	echo -n "Enter your score [0-10] ('q' to quit): "
	read SCORE;
	if (("SCORE" < "0")) || (("SCORE" > "10")); then
		echo "Try again: "
	elif [[ "$SCORE" == "q" ]]; then
		MEDIA=$((SUM / NUMBER))
		echo "Média: $MEDIA"
		echo "Sum: $SUM."
		break
	elif [[ "$SCORE" == "r" ]]; then
		SUM="0"
		NUMBER="0"
	else
		SUM=$((SUM + SCORE))
		NUMBER=$((NUMBER + 1))
	fi
done
echo "Exiting."
