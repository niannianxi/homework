/*75.��Ŀ������һ���ַ������ҵ����ĵ�һ�����ظ����ַ���
������������������������ڣ��򷵻� -1��*/
#include<stdio.h>
#include<string.h> 
int firstUniqChar(char* s);
int main()
{
	char s[100];
	int a;
	scanf("%s",s);
	 a=firstUniqChar(s);
	 if(a==-1)
	 printf("������������");
	 printf("��һ�����ظ��ַ���λ��Ϊ%d",a+1); 
}
int firstUniqChar(char* s) {
    int k,i,j;
    int len=strlen(s);
    if(len==1)//����������ȿ���
        return 0;
    if(len==0)
        return -1;
    k=0;//��־s[i]�ǲ���Ψһ�ַ�
    for(i=0;i<len;i++)
    {
        k=0;//ÿ�ζ���ʼ��
        for(j=0;j<len;j++)
            if(s[i]==s[j]&&i!=j)
            {
                k=1;
                break;
            }
        if(k==0)//s[i]��Ψһ�ַ����ǵ�һ��
            return i;
    }
    return -1;
}
