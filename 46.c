//46.题目：统计 1 到 100 之和。
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("1 到 100 之和为%d",sum);
}
