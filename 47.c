#include<stdio.h>
int main()
{
	int n=100;
	while(n*n>=50)
	{
		scanf("%d",&n);
		printf("%d的平方为%d",n,n*n);
		printf("\n");
	}
	return 0;
} 
