
int dp[1005][1005];     /*dp[i][j]��ʾ��ʾA���ӵ�0���ַ���ʼ����i���ַ���B���ӵ�0��

�ַ���ʼ����j���ַ����������ִ��ı༭���롣�ַ������±��1��ʼ��*/

char a[1005],b[1005];   //a,b�ַ������±�1��ʼ

 

int EditDis()

{

    int len1 = strlen(a+1);

    int len2 = strlen(b+1);

    //��ʼ��

    for(int i=1;i<=len1;i++)

        for(int j=1;j<=len2;j++)

            dp[i][j] = INF;

    for(int i=1;i<=len1;i++)

        dp[i][0] = i;

    for(int j=1;j<=len2;j++)

        dp[0][j] = j;

    for(int i=1;i<=len1;i++)

    {

        for(int j=1;j<=len2;j++)

        {

            int flag;

            if(a[i]==b[j])

                flag=0;

            else

                flag=1;

            dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+flag));

            //dp[i-1][j]+1��ʾɾ���ַ���a���һ���ַ�a[i]

            //dp[i][j-1]+1��ʾ���ַ������b���һ���ַ�

            //dp[i-1][j-1]+flag��ʾ�ı�,��ͬ�����������,��ͬ����Ҫ,��flag��¼

        }

    }

    return dp[len1][len2];

}

