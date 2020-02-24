//34.题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include<stdio.h>
int main()
{
	int count=1,num,c,b;
	printf("请输入一个小于五位的正整数\n");
	scanf("%d",&num);
	c=num;
	printf("逆序:");
	while(c/10!=0)
	{
		count++;
		b=c%10;
		printf("%d",b);
		c=c/10;
	}
	b=c%10;
	printf("%d\n",b);
	printf("%d是%d位数",num,count);
}
