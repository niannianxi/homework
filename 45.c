/*45.���� 3 �� 3 �еľ���ʵ�����Ӧλ�õ�������ӣ�������һ���¾���*/
#include<stdio.h>
int main(void)
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("��������a�����ֵ��\n"); 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
		if(i==2)
		printf("\n");
	}
	printf("����������b�����ֵ��\n"); 
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
	printf("��Ӻ��¾����ֵΪ��\n"); 
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
