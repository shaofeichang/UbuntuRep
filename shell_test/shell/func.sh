#!/bin/bash

funWithReturn(){
    echo "This function will return ths sum of two num"
    echo "Input first num: "
    read aNum
    echo "Input second num: "
    read anotherNum
    echo "Two num $aNum and $anotherNum"
    return $(($aNum+$anotherNum))
}
funWithReturn
echo "Sum is : $?"
