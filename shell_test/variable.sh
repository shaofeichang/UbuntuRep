#!/bin/bash
myUrl="http://www.google.com"
readonly myUrl
myUrl="http://www.runoob.com"
echo $myUrl
unset myUrl
echo $myUrl


# 字符串
str='this is a string'

your_name='runoob'
str="hello, I know you are \"$your_name\"!"
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

string='abcd'
echo ${#string}
string="runoob is a great site"
echo ${string:1:4} # 输出 unoo


string="runoob is a great site"
echo `expr index "$string" io`  # 输出 4
