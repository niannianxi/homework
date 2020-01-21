#include<stdio.h>
int wan(int i);
int main()
{
	int i=1000;
	while(--i)
	{
		if(wan(i))
			printf("%d\t",i);
    }
	printf("\n");
	return 0;
}
int wan(int i)
{
	int sum=0;
    for(int j=1;j<i;j++)
	{
	  if(i%j==0)
		  sum+=j;
	}
	if(sum==i)
		return 1;
    return 0;
}