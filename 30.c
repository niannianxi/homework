/*30.����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�����κ�ֵ
�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ����
���� false��*/
#include<stdio.h>
int panduan(int *a,int n); 
int main()
{
	int a[10],n,i,j;
	printf("��������Ҫ�������������:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   if(panduan(a,n))
   printf("true");
   else printf("false");
	
}
int panduan(int *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	  for(j=i+1;j<n;j++)
	  {if(a[i]==a[j])
	  return true;
	  } 
	  return false;
}

