/*85.��Ŀ������һ���ǿ��������飬
����ĳ��Ԫ��ֻ����һ�����⣬��
��ÿ��Ԫ�ؾ��������Ρ�
�ҳ��Ǹ�ֻ������һ�ε�Ԫ��*/
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
	printf("���������������ֵĸ�����\n");
	scanf("%d",&n);
	printf("����������飺\n");
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
	a=singleNumber(nums,n);
	printf("�Ǹ�ֻ������һ�ε�Ԫ����%d\n",a);
}

