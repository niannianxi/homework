/*写一个函数，求一个字符串的长度，
在main函数中输入字符串，并输出其长度*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{	//定义一个字符数组
	char Str[100];
    int length=0;
	printf("输入一个字符串:\r\n");
	gets( Str );  
	for (length = 0; length < 100; length++)
	{
		if(Str[length]=='\0')
		{
			break;
		}
	}
	printf( "输出结果: %s 长度为:%d\n", Str,length);
}

