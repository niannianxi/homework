#include <stdio.h>
main()
{
    int a[100],i,max,maxp,min,minp,t,n;
    printf("���������������ֵĸ�����");
	 scanf("%d",&n); 
    printf("����������:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=min=a[0];
    maxp=minp=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        maxp=i;
        }
           if(a[i]<min)
        {
        min=a[i];
        minp=i;
        }
}//forѭ��Ӧ����Ϊֹ
if(minp!=0)//ע��Ҫ���������  ��ֹ��Сֵ�ǵ�һ��ʱ����  ����
{
        t=a[0];
        a[0]=a[maxp];
           a[maxp]=t;
        t=a[n-1];
        a[n-1]=a[minp];
        a[minp]=t;
}
    else
{
t=a[0];
        a[0]=a[maxp];
           a[maxp]=t;
        t=a[n-1];
        a[n-1]=a[maxp];
        a[maxp]=t;
}

for(i=0;i<n;i++)
{
if(i!=4)
printf("%8d",a[i]);
else printf("%8d\n",a[i]);
}
printf("\n");
}
