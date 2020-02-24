/*60题目：给出一个 32 位的有符号整数，你需要将这个
整数中每位上的数字进行反转*/

#include <stdio.h>

#include <string.h>

#include<stdlib.h>

int reverse(int x) 

{ 

	unsigned int mul = 1;

	int temp = x;

	while (temp >= 10 || temp <= -10) {

		temp /= 10;

		mul *= 10;

	}

	int sum = 0;

	int get = 0;

	while (x != 0) {

		get = x % 10;

		x /= 10;

		sum += get * mul;

		mul /= 10;

	}

	if ((x > 0 && sum < 0) || (x < 0 && sum>0)) {

		sum = (-1)*sum;

	}

	//判断是否溢出

	if (get != (sum % 10)) {

		return 0; 

	}
	return sum;
}
int main()
{
	signed n;
   scanf("%d",&n);
	n = reverse(n);
	printf("%d", n);
	return 0;
}

