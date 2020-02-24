/*51.题目：数字比较*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个进行比较的数：a b\n");
	scanf("%d %d",&a,&b);
	if(a>b) 
	printf("%d比%d大",a,b);
	if(a<b)
	printf("%d比%d大",b,a);
	if(a==b)
	printf("%d与%d相等",a,b); 
}
