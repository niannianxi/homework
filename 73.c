/*73.��Ŀ������һ���������� nums ��һ��Ŀ��ֵ target��
�����ڸ��������ҳ���ΪĿ��ֵ���� ���� ������
���������ǵ������±ꡣ
����Լ���ÿ������ֻ���Ӧһ���𰸡�
���ǣ��㲻���ظ��������������ͬ����Ԫ�ء�*/ 
#include<stdio.h>
int main(void)
{
	int nums[10],target,i,j,t,m;
	for(i=0;i<10;i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("������Ŀ��ֵ��");
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
		 printf("���ǵ������±�Ϊ%d %d",t,m);
		 return 0;
 } 
