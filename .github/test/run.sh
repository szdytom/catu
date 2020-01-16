#! /usr/bin/sh

cd /home/runner/work/catu/catu/.github/test/

echo Compile Start
for code in $(echo *.cpp); do
	g++ -std=c++11 -Wall -Wextra $code -o $code.out
	if [ $? != 0 ]; then
		echo $code Compile OK
	else
		echo $code Compile Error
		exit 1
	fi
done

echo Compile OK
echo Running the test code
for code in $(echo *.out); do
	./$code
	if [ $? != 0 ]; then
		echo Test $code OK!
	else
		echo Test $code FAIL!
		exit 1
	fi
done

echo All Test Completed