#include<stdio.h>
int main()
{
	int a[10],t,n,i,j,k,m;
	printf("���������������ֵĸ�����");
	scanf("%d",&n);
	printf("����������飺\n") ; 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n");
	printf("�����������е�Ԫ������ƶ���λ�ø�����");
	scanf("%d",&k);
	      while(k > 0) {
	    	  int t = a[n-1];
	    	  for(i =n-1;i > 0; i--) 
	    		   a[i] = a[i-1];
	    	  a[0] = t;
	    	  k--;	      
	    }

	printf("�����е�Ԫ������ƶ���%d��λ�ú�Ľ��Ϊ��\n",k);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
} 
