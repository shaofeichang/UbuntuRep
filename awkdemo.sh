#输出文本中的1，4项
awk '{print $1,$4}' log.txt
#格式化输出
awk '{printf "%-8s %-9s\n",$1,$4}' log.txt
#指定分割字符‘,’
awk -F, {'print $1,$2'} log.txt
#使用多个分隔符 先使用空格分隔 然后对分割
awk -F '[ ,]' '{print $1,$2,$5}' log.txt

awk -va=1 '{print $1,$1+a}' log.txt

awk -va=1 '{print $1,$(1+a)}' log.txt

awk '{printf "\n"}' log.txt

awk -va=1 -vb=s '{print $1,$1+a,$1b}' log.txt

echo "brbr"
awk '{print NR,FNR,$1,$2,$3}' log.txt

echo "brbr"
awk '{print $1,$2,$5}' OFS=" $ " log.txt

echo "brbr"
awk '$2 ~ /th/ {print $2,$4}' log.txt

awk '/re/' log.txt

awk 'BEGIN{IGNORECAS=1} /this/' log.txt
