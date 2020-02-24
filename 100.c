 #include<iostream>
 #include<cstdlib>
 #include<cstdio>
 #include<cstring>
 #include<queue>
 #include<algorithm>
 #include<cmath>
 #define N 1000005
 using namespace std;
 int n;
 int a[55];
 int bj(int a,int b){
     return a>b;
 }
 bool fss[N];
 int zz;
 int ss[N];
 void xs(){
     int mx=a[1];
     for(int i=2;i<=mx;i++)
     {
         if(!fss[i])
         {
             zz++;
             ss[zz]=i;
         }
         for(int j=1;j<=zz;j++)
         {
             if(ss[j]*i>mx)break;
             fss[ss[j]*i]=1;
             if(!(i%ss[j]))
                 break;
         }
     }
 }
 long long ans=0x7ffffff;
 int b[52],c[52],b2[52];
 inline void dfs(int wz,long long sum){
     //cout<<b[wz]<<endl;
     long long an=0;
     int d[52];
      
     for(int i=1;i<=n;i++)
     {
         an+=(a[i]%b[wz]);
         a[i]/=b[wz];
     }
     if(sum+an>=ans)return;
     memcpy(d,a,sizeof(a));
     if(a[1]!=1&&a[1]!=0)
     {
         for(int i=1;i<=zz;i++)
         {
             if(b2[wz]*ss[i]>c[1])break;
             b[wz+1]=ss[i];
             b2[wz+1]=b2[wz]*ss[i];
             dfs(wz+1,an+sum);
             b[wz+1]=0;
             b2[wz+1]=0;
             memcpy(a,d,sizeof(a));
         }
     }
     else
     {
         long long as=0;
         for(int i=1;i<=n;i++)
         {
             if(a[i])as+=1;
         }
         int la=1;
         for(int i=1;i<=wz;i++)
         {
             la*=b[i];
         }
         ans=min(ans,sum+an+as);
     }
 }
 int main(){
 //  freopen("coin.in","r",stdin);
 //  freopen("coin.out","w",stdout);
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
         c[i]=a[i];
     }
     sort(a+1,a+n+1,bj);
     sort(c+1,c+n+1,bj);
     xs();
     b[1]=1;b2[1]=1;
     b[0]=1;b2[0]=1;
     dfs(1,0);
     printf("%lld\n",ans);
     //while(1);
     return 0;
 }
