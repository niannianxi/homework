#include <stdio.h>
int func(int n)
{
    if(n==1)
        return 10;
    else
        return 2+func(n-1);
}
int main(void)
{
    int n=5;
     
    printf("%d\n",func(n));
     
    return 0;
}
