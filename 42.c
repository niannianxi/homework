//42.题目：求一个3*3矩阵主对角线元素之和。
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=a[0][0]+a[1][1]+a[2][2];
	printf("3*3矩阵主对角线元素之和为%d",sum);
}
