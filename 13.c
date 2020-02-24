#include<stdio.h>
int fac(int n);
int main()
{
   int n;
   scanf("%d",&n);
	 printf("%d\n",fac(n));
}
int fac(int n)
{
 if(n==1||n==2) 
	 return 1;
 return fac(n-1)+fac(n-2);
}
