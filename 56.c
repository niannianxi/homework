/*56.��Ŀ�������ַ������ȡ�*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	gets(a);
	int i=0;
	while(a[i++]);
	printf("%d",i-1);
}
