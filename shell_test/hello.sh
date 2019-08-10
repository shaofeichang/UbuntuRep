#!/bin/bash
for skill in Ada Coffe Action Java; do
    echo "I am good at ${skill}Script"
done
myUrl="http://www.google.com"
readonly myUrl
myUrl="http://www.runoob.com"
your_name='runoob'
str="Hello, I know you are \"$your_name\"! \n"
echo -e $str
your_name="runoob"
# 使用双引号拼接
greeting="hello, "$your_name" !"
greeting_1="hello, ${your_name} !"
echo $greeting  $greeting_1
# 使用单引号拼接
greeting_2='hello, '$your_name' !'
greeting_3='hello, ${your_name} !'
echo $greeting_2  $greeting_3
