#include<stdio.h>
int main(void)
{
 unsigned long  a=1,b=1,n,c;
     printf("������쳲��������е�������");
	 scanf("%d",&n);
   while(--n)
   {
	c=a;
    a=b;   
	b=c+b;
   }
   printf("%d\n",a);
   return 0;
}