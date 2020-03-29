#!/bin/bash
a=`ls /root`
for i in ${a[@]}
do
	echo $i
done
rm -rf LIUJUNMING
if [ $? -eq 0 ]
then
	echo "successfully in delete the file!"
else
	echo "failed in delete the file!"
fi

