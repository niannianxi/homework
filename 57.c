#include<stdio.h>
void main()
{
int a[100][100],i,j,n;
printf("������������ǵ�����:");
scanf("%d",&n);
for(i=0;i<n;i++) //ʹ����ĵ�һ�ж�Ϊ1
a[i][0]=1;

for(i=1;i<n;i++) //���и�ֵ
for(j=1;j<=i;j++)
a[i][j]=a[i-1][j]+a[i-1][j-1];

for(i=0;i<n;i++) //������
{
for(j=0;j<=i;j++)
printf("%d ",a[i][j]);
printf("\n");
}

}

