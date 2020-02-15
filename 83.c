/*83.题目：从键盘输入一些字符，逐个把它们写到磁盘文件上，直
到输入一个#为止。*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	fp=fopen("1.txt","w");

if((fp=fopen("1.txt","w"))==NULL)//打开输出文件并使fp指向此文件

{

   printf("无法打开此文件!\n");//如果打开出错就输出打不开的信息

   exit(0);//退出程序

}
	char c;
	scanf("%c",&c);
	while(c!='#')
	{
		fprintf(fp,"%c",c);
		scanf("%c",&c);
	}
        fclose(fp);
	return 0;
}
