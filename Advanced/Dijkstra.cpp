#include <bits/stdc++.h>
#define MAX_V 50
#define INF 0x3fffff
using namespace std;
int cost[MAX_V][MAX_V];//cost[u][v]表示边e=(u,v)的权值 不存在时设为INF 
int d[MAX_V];//顶点s出发的最短距离 
bool used[MAX_V];//已经使用过的图
int N;		 //顶点数
int M;
struct edge{
	int to,cost;
};
void dijkstra(int s){
	fill(d,d+N,INF);
	fill(used,used+N,false);
	d[s]=0;
	
	while(true){
		int v=-1;
		//从尚未使用的顶点中选择一个距离最小的顶点
		for(int u=0;u<N;++u){
			if(!used[u]&&(v==-1||d[u]<d[v]))
			v=u;
		} 
		if(v==-1) break;
		used[v]=true;
		for(int u=0;u<N;++u){
			d[u]=min(d[u],d[v]+cost[v][u]);
		}
	}
} 
int main()
{
	
}
