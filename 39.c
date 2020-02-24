#include "stdio.h"
int main(void)
{
  for(int i=2;i<=100;i++)/*确定范围：2——100*/
{
for(int k=2;k<i;k++)
{
if(i%k==0)break;/*如果找到一个不是1或者它本身的因子，则停止该循环，此时k<i*/
}
if(k==i)
printf("%d\n",i);/*当k=i时表明i不存在除1和本身以外因子，因而它是素数，打出来*/

}
} 
