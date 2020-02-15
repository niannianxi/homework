/*34.给一个不多于5位的正整数，要求：一、求它是几位数，
二、逆序打印出各位数字。*/
#include<stdio.h>
int main()
{
	int i=0,n,t,a;
	printf("请输一个不多于5位的正整数:"); 
	scanf("%d",&n);
	t=n;
	while(t)
	{
		t/=10;
		i++;
	}
	t=0;
	printf("该数为%d位数\n",i);
	while(i--)
	{
		a=n%10;
	   n/=10;
	   t=t*10+a;
	}
	printf("逆序打印出各位数字:%d",t);
	return 0;
} 
