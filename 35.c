//35.��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%10==num/10000&&num%100/10==num%10000/1000)
	{
		printf("%d�ǻ�����",num);
	}else{
		printf("%d���ǻ�����",num);
	}
}
