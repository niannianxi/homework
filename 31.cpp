#include<stdio.h>
int jiechen(int n);
int main(void)
{
  int n;
  scanf("%d",&n);
  printf("%d\n",jiechen(n));
  return 0;
}
int jiechen(int n)
{
  if(n==0)
	  return 1;
  return jiechen(n-1)*n;
}