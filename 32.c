//32.题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>
#include<conio.h>
void f(int n)
{
	char ch;
	if(n<=1)
	{
		ch=getchar();
		putchar(ch);
	}else{
		ch=getchar();
		f(n-1);
		putchar(ch);
	}
}
int main()
{
	int i=5;
	printf("请输入五个字符");
	f(5);
}
