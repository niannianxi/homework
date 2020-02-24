/*50.题目：给定一个数组，将数组中的元素向右移动k个位置，其中k是
非负数*/
#include<stdio.h>
int main()
{
	int a[10],t,n,i,j,k,m;
	printf("请输入数字的个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n");
	printf("请输入数组中的元素向右移动的位置个数：");
	scanf("%d",&k);
	      while(k > 0) {
	    	  int t = a[n-1];
	    	  for(i =n-1;i > 0; i--) 
	    		   a[i] = a[i-1];
	    	  a[0] = t;
	    	  k--;	      
	    }

	printf("数组中的元素向右移动的%d个位置后的结果为：\n",k);
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
} 
