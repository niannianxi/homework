//24.��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�
//�����ڵ�10�����ʱ�������������ף���10�η�����ߣ�
#include<stdio.h>
double f(int n)
{
	if(n==1)
	{
		return 50;
	}
	if(n>1){
		return f(n-1)/2;
	}
}
int main()
{
	double a,sum=100.0;
	int i;
	a=f(10);
	printf("��10�η���%lfm\n",a);
	for(i=1;i<=10;i++)
	{
		sum+=f(i)*2;
	}
	printf("���ڵ�10�����ʱ��������%lf��",sum);
}
