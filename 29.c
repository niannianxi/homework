#include<stdio.h>
int jiechen(int n);
int main()
{
	int n,i,t=0;
	scanf("%d",&n);
 for(i=1;i<=n;i++)
	t+=jiechen(i);
 printf("%d\n",t);
}
int jiechen(int n)
{
	int t=1,i;
   for(i=1;i<=n;i++)
    t*=i;
   return t;
}
