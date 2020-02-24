#include<stdio.h>
int main(void) 
{
	int n,b=1;
	scanf("%d",&n);
	while(b<=n)
	{
	if(b%3==0&&b%5==0)
	  printf("%d is FizzBuzz\n",b);
	else 
	 if(b%3==0)
	  printf("%d is Fizz\n",b);
	else 
	 if(b%5==0)
	  printf("%d is Buzz\n",b);
	else
	  printf("没有字符串表示%d\n",b);
	b++;
	}
	return 0;
}
