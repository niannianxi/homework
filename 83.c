/*83.��Ŀ���Ӽ�������һЩ�ַ������������д�������ļ��ϣ�ֱ
������һ��#Ϊֹ��*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	FILE *fp;
	fp=fopen("1.txt","w");
	char c;
	scanf("%c",&c);
	while(c!='#')
	{
		fprintf(fp,"%c",c);
		scanf("%c",&c);
	}
	return 0;
}
