/*ͳ������С�ڷǸ�����n��������������*/
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
	printf("С�ڷǸ�����n������������Ϊ:%d",t);
	  return 0;
} 
