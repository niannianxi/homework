/*给定一个只包括'('，')'，'{'，'}'，'['，']'?的字符串，判断字符串是否有效*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int n,i;
	scanf("%d",n);
	for( i=0;i<n;i++)
	scanf("%c",s[i]);
	if(checkValidString(s))
	printf("该字符串有效"); 
	else
	  printf("该字符串没有效");
	  return 0; 
}
int checkValidString(char * s){
    int len = strlen(s),k,max=0,min=0;
    if (len == 0) {
        return 1;
    }
    int min = 0, max = 0;
    for ( k = 0; k < len; k++) {
        if (s[k] == '('||s[k]=='{'||s[k]=='[') {
            min++;
            max++;
        } else if (s[k] == ')'||s[k]=='}'||s[k]=='}') {
            min = MAX(min - 1,0);
            max--;
        } else if (s[k] == '*') {
            min = MAX(min - 1,0);
            max++;
        } else {
            printf("error input %s", s[k]);
        }

        if ( max < 0) {
            return 0;
        }
    }
    if (min == 0) {
        return 1;
    }
    return 0;
}

