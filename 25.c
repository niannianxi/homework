//25.题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，
//又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。
//到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
#include<stdio.h>
int f(int n)
{
	if(n==10)
	{
		return 1;
	}
	if(n>=0&&n<10)
	{
		return 2*f(n+1)+2;
	}
}
int main()
{
	int sum=0;
	sum=f(1);
	printf("第一天共摘了%d",sum);
}
