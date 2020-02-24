/*94.题目：计算2的20次方。不允许用**和pow()*/
#include<stdio.h>
int main()
{
	int a=20,t=1;
	while(a--)
	t*=2;
	printf("2的20次方为：%d\n",t);
}
