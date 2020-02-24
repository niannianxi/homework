#include<stdio.h>
int taijie(int n);
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",taijie(n));
}
int taijie(int n)
{
	if(n==2||n==1)
	return n;
	return taijie(n-2)+taijie(n-1);
}
