/*84.��Ŀ���Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��
Ȼ�������һ�������ļ�"test"�б��档*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("test","w");
	if((fp=fopen("test","w"))==NULL)//������ļ���ʹfpָ����ļ�

{
 printf("�޷��򿪴��ļ�!\n");//����򿪳��������򲻿�����Ϣ
  exit(0);//�˳�����
}
	char c;
	scanf("%c",&c);//����#�������� 
	while(c!='#')
	{
		if(c>='a'&&c<='z')
		c=c-32;
		fprintf(fp,"%c",c);
		scanf("%c",&c);
	}
	fclose(fp); 
	return 0;
}
