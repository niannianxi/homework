/*70.��Ŀ����дһ������������nΪż��ʱ��
���ú�����1/2+1/4+...+1/n,
������nΪ����ʱ�����ú���1/1+1/3+...+1/n*/
#include<stdio.h>
double add(int n);
int main() 
{
	int n;
	double t;
	scanf("%d",&n);
	while(n>0&&n!=0)
	{
	  t+=add(n);
	  n-=2;
	 }		
	printf("%lf",t);
}
double add(int n)
{
	double t=0;
		t=1.0/n;
	return t;
} 
