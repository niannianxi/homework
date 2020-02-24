/*70.题目：编写一个函数，输入n为偶数时，
调用函数求1/2+1/4+...+1/n,
当输入n为奇数时，调用函数1/1+1/3+...+1/n*/
#include<stdio.h>
double add(int n);
int main() 
{
	int n;
	double t;
	scanf("%d",&n);
	while(n>0&&n!=0)
	{
	  t+=add(n);
	  n-=2;
	 }		
	printf("%lf",t);
}
double add(int n)
{
	double t=0;
		t=1.0/n;
	return t;
} 
