#include<stdio.h>
int main()
{
  int i,j,t,f=0;
  for(i=1;i<=4;i++)//假设为百位 
   for(j=1;j<=4;j++)//假设为十位 
    for(t=1;t<=4;t++)//假设为个位 
	if(i!=j&&i!=t&&t!=j)
	   	{
	   		printf("%d\n",i*100+10*j+t);
	   		f++;
		}
	
	printf("\n%d\n",f);
	return 0;
} 
