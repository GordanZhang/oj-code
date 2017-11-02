#include <bits/stdc++.h>
using namespace std;
vector<int > v[100];
int level[100],book[100];
int maxdepth=-1;
void bfs()
{
    queue<int> q;
    q.push(1);
    level[1]=0;
    while(!q.empty())
    {
        int index=q.front();
        q.pop();
        maxdepth=max(maxdepth,level[index]);
        if(v[index].size()==0){
            book[level[index]]++;
        }
        for(int j=0;j<v[index].size();++j){
            q.push(v[index][j]);
            level[v[index][j]]=level[index]+1;
        }
    }
}
int main()
{

    int c,n,m,k,node;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        cin>>node>>k;
        for(int j=0;j<k;++j){
            cin>>c;
            v[node].push_back(c);
        }
    }
    bfs();
    cout<<book[0];
    for(int i=1;i<=maxdepth;++i){
        cout<<" "<<book[i];
    }
    return 0;
}
