#include <stdio.h>
int main()
{
    int n[8]={12, 33, 55, 67, 78, 89, 94};    //定义一个数组
    int i, j, num;
    printf("Please enter number: ");          //输入一个数
    scanf("%d", &num);
    for (i=0; i<8; i++){
        if (num<n[i]){                        //判断数字与数组内数字对比，然后重新排序号
            for (j=7; j>i; n[j--]=n[j-1]);
            n[j]=num;
            break;
        }
        else if (num>=n[6]) n[7]=num;         //判断数字处于末尾时的特殊情况
    }
    for (i=0; i<8; printf("%d ", n[i++]));    //输出排序后的数组
    printf("\n");
    return 0;
}


