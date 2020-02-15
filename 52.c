/*52.取一个整数a从右端开始的4~7位。*/ 
#include<stdio.h>
int main()
{
	int a,t=0,b=4;
	scanf("%d",&a);
	while(b--)
	{
		t=a%10+t*10;
		a/=10;
	}
	printf("该整数从右端开始的4~7位为：%d",t);
 } 
