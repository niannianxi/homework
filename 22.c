#include<stdio.h>
int main(void)
{
	int a,n,i=0;
	printf("请输入你要相加的数字:");
	scanf("%d",&a);
	printf("请输入你要相加的次数：");
	scanf("%d",&n);
	while(n--)
	{
		i+=a;
		a=a*10+a;
	 }
	 printf("%d\n",i);
	 return 0; 
} 