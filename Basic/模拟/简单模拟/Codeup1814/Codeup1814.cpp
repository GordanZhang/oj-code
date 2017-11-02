#include <bits/stdc++.h>
const int maxn=10005;
int fuck[maxn];
int main()
{
    int L,M;
    while(scanf("%d%d",&L,&M)!=EOF)
    {
        int a,b,ans=0;
        if(L==0&&M==0) break;
        for(int i=0;i<=L;i++)
        {
            fuck[i]=1;
        }
        while(M--){
            scanf("%d%d",&a,&b);
            for(int j=a;j<=b;j++)
                fuck[j]=0;
        }
        for(int i=0;i<=L;i++)
        {
            if(fuck[i]==1)
                ans++;
        }
        printf("%d\n",ans);
    }
return 0;
}
