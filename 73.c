/*73.题目：给定一个整数数组 nums 和一个目标值 target，
请你在该数组中找出和为目标值的那 两个 整数，
并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。
但是，你不能重复利用这个数组中同样的元素。*/ 
#include<stdio.h>
int main(void)
{
	int nums[10],target,i,j,t,m;
	for(i=0;i<10;i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("请输入目标值：");
	scanf("%d",&target);
	for(i=0;i<10;i++)
	  for(j=i+1;j<10;j++)
	    {
	    	if(nums[i]+nums[j]==target)
	    	{
			 t=i;
			 m=j;
			 break;
			}			 	
		 }
		 printf("他们的数组下标为%d %d",t,m);
		 return 0;
 } 
