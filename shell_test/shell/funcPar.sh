#!/bin/bash

funWithParam(){
    echo "1  Parameter : $1"
    echo "2  Parameter : $2"
    echo "10 Parameter : ${10}"
    echo "11 Parameter : ${11}"
    echo "Parameter num: $#"
    echo "Ouput as string: $*"
    echo "ProcessID: $$"
    echo "Final ProcessID: $!"
    echo "$@"
    echo "$-"
    echo "$?"
}
funWithParam 1 2 3 4 5 6 7 8 9 11 22 33 44

