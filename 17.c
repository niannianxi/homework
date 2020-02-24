#include <stdio.h>
int main (void)
{
	float score;
	char grade;
	printf("Please input a score:");
	scanf("%f",&score);
	while(score<0||score>100)
	{
		printf("the score Êä´íÁË");
		printf("Please input a score:");
	    scanf("%f",&score);
	}
	grade=(score>=90&&score<=100?'A':score<60?'C':'B');
	printf("The %f belongs to '%c'!\n",score,grade);
	return 0;
}