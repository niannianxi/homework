#include<stdio.h>
int main(void)
{
char c;
int letters=0,spaces=0,digits=0,others=0;
printf("请输入一些字母：\n");
while((c=getchar())!='\n')
{
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
letters++;
else if(c>='0'&&c<='9')
digits++;
else if(c==' ')
spaces++;
else
others++;
}
printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
return 0;
}

