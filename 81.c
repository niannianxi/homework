#include<stdio.h>
int main() 

{int a,i,b[4],t; 

scanf("%d",&a); 

b[0]=a%10; 

b[1]=a%100/10; 

b[2]=a%1000/100; 

b[3]=a/1000; 

for(i=0;i<=3;i++) 
{b[i]+=5; 
b[i]%=10; 
}
  for(i=0;i<=3/2;i++) 
   {t=b[i]; 
   b[i]=b[3-i]; 
   b[3-i]=t; 
}
for(i=3;i>=0;i--) 
printf("%d",b[i]); 
} 
