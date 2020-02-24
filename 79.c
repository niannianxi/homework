/*79.题目：读取7个数（1—50）的整数值，
每读取一个值，程序打印出该值个数的＊。*/
#include<stdio.h>
int main(void)
{
	int i=7,n;
	while(i--)
	{
		scanf("%d",&n);
		while(n--)
		printf("*");
		printf("\n");
	}
	return 0;
}
