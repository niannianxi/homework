#include<stdio.h>
int main()
{
  int t=0,i,j;
  for(i=101;i<201;i++)
  {	  for(j=2;j<i;j++)
	  {
        if(i%j==0)
			break;
	  }	
     if(i==j)
	 {
		 printf("%d\n",i);
		 t++;
     }
  }
  printf("����%d������\n",t);
  return 0;
}