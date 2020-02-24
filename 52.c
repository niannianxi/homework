#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{   /*取一个整数a从右端开始的4-7位
       程序分析：可以这样考虑：
       1.先使a右移4位
       2.取一个低4全为1,其余为0的数,
       可以这样~(~0<<4)
       3.两者相& */
    unsigned int a,b,c,d;
    scanf("%d",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%d\n",d);
    getch();
    return 0;
}
