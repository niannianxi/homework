/*84.题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，
然后输出到一个磁盘文件"test"中保存。*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("test","w");
	if((fp=fopen("test","w"))==NULL)//打开输出文件并使fp指向此文件

{
 printf("无法打开此文件!\n");//如果打开出错就输出打不开的信息
  exit(0);//退出程序
}
	char c;
	scanf("%c",&c);//输入#结束输入 
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
