/*85.题目：给定一个非空整数数组，
除了某个元素只出现一次以外，其
余每个元素均出现两次。
找出那个只出现了一次的元素*/
#include<stdio.h>
int singleNumber(int* nums,int n) {

        int result=0,i;

        for(i=0;i<n;i++)

            result ^=nums[i];

        return result;

    }
int main()
{
	int nums[10],a,n,i;
	printf("请输入数组中数字的个数：\n");
	scanf("%d",&n);
	printf("请输入该数组：\n");
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
	a=singleNumber(nums,n);
	printf("那个只出现了一次的元素是%d\n",a);
}

