//32.��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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
	printf("����������ַ�");
	f(5);
}
