#include<stdio.h>
int main(void)
{
  int a[5]={9,6,5,4,1},i,temp;
  printf(" origin array\n");
    for (i=0;i<5;i++)    
	  printf ("%4d",a[i]);    
	  for (i=0;i<5/2;i++) 
	   {
		 temp=a[i];
		 a[i]=a[5-i-1];   
		 a[5-i-1]=temp;  
	   }   
	 printf("\n sorted array\n");    
	 for (i=0;i<5;i++)   
	  printf("%4d",a[i]);  
  return 0;   
   }

