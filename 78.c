#include<stdio.h>
main()
{
char a[100],b[100],*p,*q;
scanf("%s%s",a,b);
p=a;
q=b;
while(*p)
++p;
while(*q)
*p++=*q++;
*p='\0';
printf("%s\n",a);
}
