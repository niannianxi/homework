//28.��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
#include<stdio.h>
int main()
{
	int i;
	float sum=0.0,a=2.0,b=1.0,t=0.0;
	for(i=1;i<=20;i++)
	{
		sum+=a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("ǰ��ʮ��ĺ�Ϊ%f",sum);
}