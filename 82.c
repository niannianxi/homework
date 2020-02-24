/*82.题目：计算字符串中子串出现的次数。*/
#include<stdio.h>
#include<string.h>
int substr_num(char *str, char *substr) 
{
	/*记录子串出现的次数 */
	int cnt = 0;
	char *ptr = str;
	while(ptr = strstr(ptr, substr))
	{
		ptr += strlen(substr);
		cnt++;
	}
	return cnt;
}
int main()
{
	char str[20];
	char substr[20];
	int a;
	scanf("%s %s",str,substr);
	a=substr_num(str,substr);
	printf("子串出现的次数为：%d",a);
}

