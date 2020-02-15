/*对10个数进行排序,我采取升序*/
#include<stdio.h>
int main(void)
{
	int a[10],i,j,min=0,t;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
     min=i;
	  for(j=i;j<10;j++)
	   {
	   	if(a[min]>a[j])
	   	{
	   		min=j;
			}
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
}
