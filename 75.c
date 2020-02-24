/*75.题目：给定一个字符串，找到它的第一个不重复的字符，
并返回它的索引。如果不存在，则返回 -1。*/
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
	 printf("该索引不存在");
	 printf("第一个不重复字符的位置为%d",a+1); 
}
int firstUniqChar(char* s) {
    int k,i,j;
    int len=strlen(s);
    if(len==1)//特殊情况优先考虑
        return 0;
    if(len==0)
        return -1;
    k=0;//标志s[i]是不是唯一字符
    for(i=0;i<len;i++)
    {
        k=0;//每次都初始化
        for(j=0;j<len;j++)
            if(s[i]==s[j]&&i!=j)
            {
                k=1;
                break;
            }
        if(k==0)//s[i]是唯一字符且是第一个
            return i;
    }
    return -1;
}
