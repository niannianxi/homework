//34.��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
#include<stdio.h>
int main()
{
	int count=1,num,c,b;
	printf("������һ��С����λ��������\n");
	scanf("%d",&num);
	c=num;
	printf("����:");
	while(c/10!=0)
	{
		count++;
		b=c%10;
		printf("%d",b);
		c=c/10;
	}
	b=c%10;
	printf("%d\n",b);
	printf("%d��%dλ��",num,count);
}
