#include<stdio.h>
void main()
{
int a[100][100],i,j,n;
printf("请输入杨辉三角的行数:");
scanf("%d",&n);
for(i=0;i<n;i++) //使数组的第一列都为1
a[i][0]=1;

for(i=1;i<n;i++) //进行赋值
for(j=1;j<=i;j++)
a[i][j]=a[i-1][j]+a[i-1][j-1];

for(i=0;i<n;i++) //输出结果
{
for(j=0;j<=i;j++)
printf("%d ",a[i][j]);
printf("\n");
}

}

