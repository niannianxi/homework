/*28.题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求
出这个数列的前20项之和。*/
#include<stdio.h>
int main()
{
	int i=20;
	double a=1,b=1,t=0,c;
	while(i--)
	{
		c=b;
		b=a+b;
		a=c;
		t+=b/a;		
	}
	printf("该数列的前20项之和为:%lf",t);
}
