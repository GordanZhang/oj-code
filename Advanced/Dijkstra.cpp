#include <bits/stdc++.h>
#define MAX_V 50
#define INF 0x3fffff
using namespace std;
int cost[MAX_V][MAX_V];//cost[u][v]��ʾ��e=(u,v)��Ȩֵ ������ʱ��ΪINF 
int d[MAX_V];//����s��������̾��� 
bool used[MAX_V];//�Ѿ�ʹ�ù���ͼ
int N;		 //������
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
		//����δʹ�õĶ�����ѡ��һ��������С�Ķ���
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
