//40.��Ŀ��ͳ������С�ڷǸ�����n��������������
#include<stdio.h>
int main(){
	int i,j,isPrime=0,n,count=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		isPrime=0;
		for(j=2;j<i;j++){
			if(i%j==0)
			{
				isPrime=1;
			}
		}
		if(isPrime==0){
		 count++;
		}
	}
	printf("%d",count);
}
