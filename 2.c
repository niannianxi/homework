#include<stdio.h>
int main()
{
  long jiang,li;
  scanf("%ld",&li);
  if(li<=100000)
  {
  	jiang=li*0.1;
  	printf("奖金为%ld",jiang);
  }
  else if(li<200000)
  {
  	jiang=100000*0.1+(li-100000)*0.075;
  	printf("奖金为%ld",jiang);
  }	
  else if(li<400000)
  {
  	jiang=100000*0.1+100000*0.75+(li-200000)*0.05;
  	printf("奖金为%ld",jiang);
  }
  else if(li<600000)
  {
  	jiang=100000*0.1+100000*0.75+200000*0.05+(li-40000)*0.03;
  	printf("奖金为%ld",jiang);
  }
  else if(li<1000000)
  {
  	jiang=100000*0.1+100000*0.75+200000*0.05+200000*0.03+(li-600000)*0.015;
  	printf("奖金为%ld",jiang);
  }
  else if(li>=1000000)
  {
  	jiang=100000*0.1+100000*0.75+200000*0.05+200000*0.03+400000*0.015+(li-1000000)*0.01;
  	printf("奖金为%ld",jiang);
  }
  return 0;
} 
