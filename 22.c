#include<stdio.h>
int main(void)
{
	int a,n,i=0;
	printf("��������Ҫ��ӵ�����:");
	scanf("%d",&a);
	printf("��������Ҫ��ӵĴ�����");
	scanf("%d",&n);
	while(n--)
	{
		i+=a;
		a=a*10+a;
	 }
	 printf("%d\n",i);
	 return 0; 
} 