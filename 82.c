/*82.��Ŀ�������ַ������Ӵ����ֵĴ�����*/
#include<stdio.h>
#include<string.h>
int substr_num(char *str, char *substr) 
{
	/*��¼�Ӵ����ֵĴ��� */
	int cnt = 0;
	char *ptr = str;
	while(ptr = strstr(ptr, substr))
	{
		ptr += strlen(substr);
		cnt++;
	}
	return cnt;
}
int main()
{
	char str[20];
	char substr[20];
	int a;
	scanf("%s %s",str,substr);
	a=substr_num(str,substr);
	printf("�Ӵ����ֵĴ���Ϊ��%d",a);
}

