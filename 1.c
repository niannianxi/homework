#include<stdio.h>
int main()
{
  int i,j,t,f=0;
  for(i=1;i<=4;i++)//����Ϊ��λ 
   for(j=1;j<=4;j++)//����Ϊʮλ 
    for(t=1;t<=4;t++)//����Ϊ��λ 
	if(i!=j&&i!=t&&t!=j)
	   	{
	   		printf("%d\n",i*100+10*j+t);
	   		f++;
		}
	
	printf("\n%d\n",f);
	return 0;
} 
