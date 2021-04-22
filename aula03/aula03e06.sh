#!/bin/bash
#This scrip opens 4 terminal windows.
i="4"
until [[ $i -lt 1 ]]; do
	xterm &
	i=$(($i-1))
done
