#include<stdio.h>
int mi(int n);
int main()
{
 int n;
 scanf("%d",&n);
 if(mi(n))
	 printf("����Ϊ3���ݴ�\n");
 else 
	 printf("������Ϊ3���ݴ�\n");
 return 0;
}
int mi(int n)
{
 while(n>3)
 {
  n/=3;
 }
 if(n!=0&&n!=3)
	return 0;
	return 1;
}