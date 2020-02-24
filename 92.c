#include "stdio.h"
#include "stdlib.h"
#include <stdio.h>

int main()
{
int x=0,y=0,z=0,count=0;
for(x=0;x<=100;x++)
{
for(y=0;y<=50;y++)
{
for(z=0;z<=20;z++)
{
if(x+2*y+5*z==100)
{
count++;
printf(" sloving :%4d ,1 : %3d 2:%3d 5 %3d \n",count,x,y,z);
} 
}
}
}
system("pause");
} 
