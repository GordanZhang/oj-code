#include <bits/stdc++.h>
#define maxn 500
const int INF =9999999;
using namespace std;
int N,M,C1,C2;
int dis[maxn],weight[maxn],w[maxn],edge[maxn][maxn],num[maxn];
bool visit[maxn];
int main()
{
    int a,b,c;
    cin>>N>>M>>C1>>C2;
    for(int i=0;i<N;++i)
        cin>>weight[i];
    fill(edge[0],edge[0]+maxn*maxn,INF);
    fill(dis,dis+maxn,INF);
    for(int i=0;i<M;++i)
    {
        cin>>a>>b>>c;
        edge[a][b]=c;
        edge[b][a]=c;
    }
    dis[C1]=0;
    w[C1]=weight[C1];
    num[C1]=1;
    for(int i=0;i<N;++i){
            int u=-1,minn=INF;
        for(int j=0;j<N;++j){
            if(!visit[j]&&dis[j]<minn){
                minn=dis[j];
                u=j;
            }
        }
            if(u==-1) break;
            visit[u]=true;
            for(int v=0;v<N;++v){
                if(!visit[v]&&edge[u][v]!=INF)
                {
                    if(dis[u]+edge[u][v]<dis[v]){
                        dis[v]=dis[u]+edge[u][v];
                        num[v]=num[u];
                        w[v]=w[u]+weight[v];
                    }
                    else if(dis[u]+edge[u][v]==dis[v])
                    {

                        num[v]+=num[u];
                        if(w[u]+weight[v]>w[v])
                        {
                            w[v]=w[u]+weight[v];
                        }
                    }
                }
            }

    }
    cout<<num[C2]<<" "<<w[C2];
    return 0;
}
