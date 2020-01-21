#include<stdio.h>
int jiechen(int n);
int main(void)
{
  int i,sum=0;
 for( i=1;i<=20;i++)
 sum+=jiechen(i);
 printf("%d",sum);
  return 0;
}
int jiechen(int n)
{
  if(n==0)
	  return 1;
  return jiechen(n-1)*n;
}
