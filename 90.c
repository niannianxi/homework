
#include <stdio.h>

#include <stdlib.h>

void Permutation(char*a, char*current);

int main()

{

	char s[30] = "abc";

	Permutation(s, s);


	return 0;

}

void Permutation(char*a, char*current)

{

	if (*current == '\0')

		printf("%s\n", a);

 

	for (char *next = current; *next != '\0'; next++)

	{

		char tem = *current;

		*current = *next;

		*next = tem;

 

		Permutation(a, current + 1);

 

		tem = *current;

		*current = *next;

		*next = tem;

	}

}

