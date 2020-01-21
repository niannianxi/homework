#include<stdio.h>
int shuixianhua(int n);
int main()
{
 int i=100;
 while(i!=1000)
 {
  if(shuixianhua(i))
	  printf("%d\n",i);
  i++;
 }
}
int shuixianhua(int n)
{
 int t=0,a=n;
 while(n!=0)
 {
  t+=(n%10)*(n%10)*(n%10);
  n/=10;
 }
 if(t==a)
	 return 1;
 return 0;
}