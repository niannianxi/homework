/*35.һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��
ʮλ��ǧλ��ͬ*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int j=n,t=0;
	int a=5;
	while(a--)
	{
		t=t*10+n%10;
		n/=10;
	}
	if(j==t)
		printf("����Ϊ������"); 
		else
		printf("������Ϊ������"); 
	return 0;
}
