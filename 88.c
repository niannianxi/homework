
/*这是我面试的一道题：C语言中怎样查找两个字符串的最长公共字符串。

 *例如： char *str1 = "hello world"; char *str2 = "aaaaabbbhellobbbbb";那么结果就是"hello".

 *这是根据网上一些思路，自己写的一个程序，源代码如下：*/

#include <stdio.h> 

#include <stdlib.h> 

#include <string.h> 

char *comstr_find(char *str1,  char *str2) 

{ 

        int i, j;

	char *sstr = (strlen(str1) < strlen(str2) ? str1 : str2); //sstr指向长度较短的字符串

	char *lstr = (strlen(str1) > strlen(str2) ? str1 : str2); //lstr指向长度较长的字符串

	char *tempstr = malloc(256);

 

	if(strstr(lstr, sstr) != NULL){

		free(tempstr);

		return sstr; //如果能找到就返回短的字符串

	}              

		 

	for(i = strlen(sstr) - 1; i > 0; i--){ 

        /*查找所有可能连续字符串在长的字符串中是否出现，这里引用了库函数strstr(char *dest, char *src)*/

		for(j = 0; j <= strlen(sstr) - i; j++) { 

			memcpy(tempstr, &sstr[j], i); 

			tempstr[i] = '\0'; 

			if(strstr(lstr, tempstr) != NULL) 

				return tempstr; 

		} 

	} 

	free(tempstr);

	return NULL; 

} 

 

int main(int argc, char *argv[]) 

{ 

	char *str1 = malloc(256); 

	char *str2 = malloc(256); 

	char *comstr = NULL;

 

	printf("请输入字符串str1:\n");

	fgets(str1, 256, stdin); 

	printf("请输入字符串str2:\n");

	fgets(str2, 256, stdin); 

	str1[strlen(str1) -1] = '\0';

	str2[strlen(str2) -1] = '\0';

        comstr = comstr_find(str1, str2);

	printf("the longest comman string is: %s\n", comstr); 

	free(comstr);

	return 0;

}

