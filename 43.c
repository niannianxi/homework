//43.��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ�������������
#include<stdio.h>
int main()
{                
    int a[11]={1,4,6,9,13,16,19,28,40,100};

    int temp,i=0,j=0;

    scanf("%d",&temp);

    for(i=9;i>=0;i--)
    {
       if(temp<a[i]){
            a[i+1] = a[i];

       }else{
             a[i+1] = temp;
             break;      
       }

    }

    for(i=0;i<11;i++)
    {

        printf("%d ",a[i]);              
     }


     
    return 0;
}
