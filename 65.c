/*дһ����������һ���ַ����ĳ��ȣ�
��main�����������ַ�����������䳤��*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{	//����һ���ַ�����
	char Str[100];
    int length=0;
	printf("����һ���ַ���:\r\n");
	gets( Str );  
	for (length = 0; length < 100; length++)
	{
		if(Str[length]=='\0')
		{
			break;
		}
	}
	printf( "������: %s ����Ϊ:%d\n", Str,length);
}

