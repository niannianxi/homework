/*83.题目：从键盘输入一些字符，逐个把它们写到磁盘文件上，直
到输入一个#为止。*/
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
