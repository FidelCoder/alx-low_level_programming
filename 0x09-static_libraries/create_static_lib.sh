#!/bin/bash
declare -a arrobj
 endl=".0"

for file in *.c
do
	arrobj=(${arrobj[*]} "$file")
done
for item in "${arrobj[@]}"
do
	gcc -c $item -o $(echo "${item/.c/.o}")
done
for item in "${arrobj[*]}"
do
         ar rc liball.a $(echo "${item//.c/.o}")
done
