/*60��Ŀ������һ�� 32 λ���з�������������Ҫ�����
������ÿλ�ϵ����ֽ��з�ת*/

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

	//�ж��Ƿ����

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

