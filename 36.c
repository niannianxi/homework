//36.��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	ch=getchar();
	if(ch=='M'||ch=='m')
	{
		printf("monday");
	}else if(ch=='w'||ch=='W')
	{
		printf("Wednesday");
	}else if(ch=='f'||ch=='F')
	{
		printf("Friday");
	}else if(ch=='t'||ch=='T'){
		ch=getchar();
		if(ch=='h'||ch=='H')
		{
			printf("Thursday");
		}else if(ch=='u'||ch=='U')
		{
			printf("Tuesday");
		}
	}else if(ch=='s'||ch=='S')
	{
		ch=getchar();
		if(ch=='a'||ch=='A')
		{
			printf("Saturday");
		}else if(ch=='u'||ch=='U')
		{
			printf("Sunday");
		}
	}
}
