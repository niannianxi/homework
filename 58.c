#include <stdio.h>
#include <string.h>
char *del_substr(char *str, const char *substr)
{
	int len = strlen(str), len_sub = strlen(substr),flag=0, t,i, j,k=0,m;
    if(len >= len_sub)
	{ 
		for(i=0,j=0;i<len;)
		{
			while(str[i]==substr[0])
			{
				t=i;
				k++;
				i++;
				flag=1;
				{ 
				  	while(str[i]==substr[k])
				  {
					flag=1;
				   k++;
				   i++;
				   if(str[i]!=substr[k]&&substr[k])
				   flag=0;
			     }
		      }
		      if(flag==0)
	     printf("找不到该字符串");
	     if(flag==1) 
        printf("找到该字符串%d",t);
		   }
		   
	   }
	   
	}
 }
  
 int main()
 {
    char str[100];
    scanf("%s",str);
    char substr[100];
    scanf("%s",substr);
    printf("%s\n", del_substr(str, substr));
    return 0;
 }
 //你的代码功能是去除一次



