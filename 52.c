/*52.ȡһ������a���Ҷ˿�ʼ��4~7λ��*/ 
#include<stdio.h>
int main()
{
	int a,t=0,b=4;
	scanf("%d",&a);
	while(b--)
	{
		t=a%10+t*10;
		a/=10;
	}
	printf("���������Ҷ˿�ʼ��4~7λΪ��%d",t);
 } 
