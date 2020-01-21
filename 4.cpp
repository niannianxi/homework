#include<stdio.h>
int main(void)
{
 int nian,yue,ri,n=0,int flag=0;
 scanf("%d %d %d",&nian,&yue,&ri);
 switch(yue)
 {
           case 1:n+=ri;break;
           case 2:n=ri+31;break;
           case 3:n=ri+59;break;
           case 4:n=ri+90;break;
           case 5:n=ri+120;break;
           case 6:n=ri+151;break;
		   case 7:n=ri+181;break;
		   case 8:n=ri+212;break;
		   case 9:n=ri+243;break;
		   case 10:n=ri+273;break;
		   case 11:n=ri+304;break;
		   case 12:n=ri+334;break;
		   default :{
			      printf("不存在该月份\n");
			   	   flag=1;
				   break;
				}
 }
 if((nian%400==0)&&n>2||((nian%4==0)&&(nian%100!=0))&&n>2)
	 n+=1;
 if(flag)
	 return 0;
  else printf("%d年%d月%d日是一年的%d天\n",nian,yue,ri,n);
   return 0;
}