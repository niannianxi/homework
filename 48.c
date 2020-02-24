#include<stdio.h>
int swap(int *m,int *n);
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	swap(&m,&n);
	printf("%d %d",m,n);
	return 0;
} 
int swap(int *m,int *n)
{
	int t;
	t=*m;
	*m=*n;
	*n=t;
}
