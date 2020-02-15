#include <stdio.h>
void f(int n){
    char ch;
    if(n>0){
        ch=getchar();
        f(n-1);
    }
    else
        return;
    printf("%c",ch);
}
int main(void){
    f(5);
    printf("\n");
    return 0;
} 
