#!/bin/bash
#First you can use grep (-n) to find the number of lines of string.
#Then you can use awk to separate the answer.
grep -n "$2" "$1" | cut -d ":" -f 1 > "$3"
