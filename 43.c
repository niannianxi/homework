#include <stdio.h>
int main()
{
    int n[8]={12, 33, 55, 67, 78, 89, 94};    //����һ������
    int i, j, num;
    printf("Please enter number: ");          //����һ����
    scanf("%d", &num);
    for (i=0; i<8; i++){
        if (num<n[i]){                        //�ж����������������ֶԱȣ�Ȼ�����������
            for (j=7; j>i; n[j--]=n[j-1]);
            n[j]=num;
            break;
        }
        else if (num>=n[6]) n[7]=num;         //�ж����ִ���ĩβʱ���������
    }
    for (i=0; i<8; printf("%d ", n[i++]));    //�������������
    printf("\n");
    return 0;
}


