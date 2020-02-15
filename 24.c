/*一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/
#include<stdio.h>
int main(void)
{
 double a=100,t=0;
 double n=10;
 while(n--)
 {
  t+=a;
  a/=2;
  t+=a;
 }
 t-=a;//求第十次落地经过路程需减去第十次弹跳距离
 printf("在第10次落地时，共经过%lf米.第10次反弹%lf米高",t,a);
 return 0;
}
