/*求100之内的素数。*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=100;i++)
	{
	 for(j=2;j<=i;j++)
	  {
		 {
		  if(i%j==0&&i!=2)
	     break;
		 }
	  }
		if(i==j)
	     printf("%d ",i);
	}  
	  return 0;
} 
