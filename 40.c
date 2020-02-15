/*统计所有小于非负整数n的质数的数量。*/
#include<stdio.h>
int main()
{
	int i,j,n,t=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	 for(j=2;j<=i;j++)
	  {
		 {
		  if(i%j==0&&i!=2)
	     break;
		 }
	  }
		if(i==j)
	   t++;
	}  
	printf("小于非负整数n的质数的数量为:%d",t);
	  return 0;
} 
