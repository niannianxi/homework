/*34.��һ��������5λ����������Ҫ��һ�������Ǽ�λ����
���������ӡ����λ���֡�*/
#include<stdio.h>
int main()
{
	int i=0,n,t,a;
	printf("����һ��������5λ��������:"); 
	scanf("%d",&n);
	t=n;
	while(t)
	{
		t/=10;
		i++;
	}
	t=0;
	printf("����Ϊ%dλ��\n",i);
	while(i--)
	{
		a=n%10;
	   n/=10;
	   t=t*10+a;
	}
	printf("�����ӡ����λ����:%d",t);
	return 0;
} 
