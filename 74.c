/*74.题目：海滩上有一堆桃子，五只猴子来分。
第一只猴子把这堆桃子平均分为五份，多了一个，
这只猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩
下的桃子又平均分成五份，又多了一个，它同样把多的一个扔入海中，拿走了一份，第三、
第四、第五只猴子都是这样做的，问海滩上原来最少有多少个桃子？*/ 
#include<stdio.h>
int main()
{
 int x,i=0,j=1;
 while(i<5){
 x=4*j;
 for(i=0;i<5;i++)
 {
  if(x%4!=0){break;}
     x=(x/4)*5+1;
}
 j++;
}
printf("%d\n",x);


return 0;


}

