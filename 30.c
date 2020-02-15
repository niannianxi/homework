/*30.给定一个整数数组，判断是否存在重复元素。如果任何值
在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则
返回 false。*/
#include<stdio.h>
int panduan(int *a,int n); 
int main()
{
	int a[10],n,i,j;
	printf("请输入你要输入的整数个数:");
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

