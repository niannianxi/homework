/*35.一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，
十位与千位相同*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int j=n,t=0;
	int a=5;
	while(a--)
	{
		t=t*10+n%10;
		n/=10;
	}
	if(j==t)
		printf("该数为回文数"); 
		else
		printf("该数不为回文数"); 
	return 0;
}
