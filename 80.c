/*80.��Ŀ������һ������nums��
��дһ������������0
�ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��*/
#include<stdio.h>
#define N 5
void f(int a[]){
	int num0=0,i;  //ͳ��0�ĸ��� 
	for(i=0;i<N;i++){
		if(a[i]==0){
			num0++;
		//	printf("%d\n",i);
		}else if(num0!=0){
			a[i-num0]=a[i];
			a[i]=0;
		}
	}
	for( i=0;i<N;i++){
		printf("%d ",a[i]);	
	}
	printf("\n");
}
int main(){
	int a[N]={0,1,0,3,12};
	f(a);
	
	return 0;
} 
