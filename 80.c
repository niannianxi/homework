/*80.题目：给定一个数组nums，
编写一个函数将所有0
移动到数组的末尾，同时保持非零元素的相对顺序。*/
#include<stdio.h>
#define N 5
void f(int a[]){
	int num0=0,i;  //统计0的个数 
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
