#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{   /*ȡһ������a���Ҷ˿�ʼ��4-7λ
       ��������������������ǣ�
       1.��ʹa����4λ
       2.ȡһ����4ȫΪ1,����Ϊ0����,
       ��������~(~0<<4)
       3.������& */
    unsigned int a,b,c,d;
    scanf("%d",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%d\n",d);
    getch();
    return 0;
}
