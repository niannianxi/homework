/*45.两个 3 行 3 列的矩阵，实现其对应位置的数据相加，并返回一个新矩阵：*/
#include<stdio.h>
int main(void)
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("请先输入a矩阵的值：\n"); 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
		if(i==2)
		printf("\n");
	}
	printf("现在请输入b矩阵的值：\n"); 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
		if(i==2)
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("相加后新矩阵的值为：\n"); 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d ",c[i][j]);
		if(j==2)
		printf("\n");
		}
	}
}
