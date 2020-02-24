
/*���������Ե�һ���⣺C�������������������ַ�����������ַ�����

 *���磺 char *str1 = "hello world"; char *str2 = "aaaaabbbhellobbbbb";��ô�������"hello".

 *���Ǹ�������һЩ˼·���Լ�д��һ������Դ�������£�*/

#include <stdio.h> 

#include <stdlib.h> 

#include <string.h> 

char *comstr_find(char *str1,  char *str2) 

{ 

        int i, j;

	char *sstr = (strlen(str1) < strlen(str2) ? str1 : str2); //sstrָ�򳤶Ƚ϶̵��ַ���

	char *lstr = (strlen(str1) > strlen(str2) ? str1 : str2); //lstrָ�򳤶Ƚϳ����ַ���

	char *tempstr = malloc(256);

 

	if(strstr(lstr, sstr) != NULL){

		free(tempstr);

		return sstr; //������ҵ��ͷ��ض̵��ַ���

	}              

		 

	for(i = strlen(sstr) - 1; i > 0; i--){ 

        /*�������п��������ַ����ڳ����ַ������Ƿ���֣����������˿⺯��strstr(char *dest, char *src)*/

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

 

	printf("�������ַ���str1:\n");

	fgets(str1, 256, stdin); 

	printf("�������ַ���str2:\n");

	fgets(str2, 256, stdin); 

	str1[strlen(str1) -1] = '\0';

	str2[strlen(str2) -1] = '\0';

        comstr = comstr_find(str1, str2);

	printf("the longest comman string is: %s\n", comstr); 

	free(comstr);

	return 0;

}

