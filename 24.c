//24.题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，
//求它在第10次落地时，共经过多少米？第10次反弹多高？
#include<stdio.h>
double f(int n)
{
	if(n==1)
	{
		return 50;
	}
	if(n>1){
		return f(n-1)/2;
	}
}
int main()
{
	double a,sum=100.0;
	int i;
	a=f(10);
	printf("第10次反弹%lfm\n",a);
	for(i=1;i<=10;i++)
	{
		sum+=f(i)*2;
	}
	printf("它在第10次落地时，共经过%lf米",sum);
}
