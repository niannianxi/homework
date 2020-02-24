#include<stdio.h>
#include<math.h>
int pin(int x);
int main(void)
{
	int i=0;
   while(1)
   {
     i++;
     if(pin(i+100)&&pin(i+168))
	 {
		 printf("%d",i);
		 return 0;
	 }
   }
   return 0;
}
int pin(int x)
{
  int y;
  y=sqrt(x);
  if(y*y==x)
  return 1;
  return 0;
}