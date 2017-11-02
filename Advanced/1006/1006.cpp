#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M;
    int minn=INT_MAX,maxn=INT_MIN;
    string unlocked,locked;
    scanf("%d",&M);
    while(M--){
        string id;
        cin>>id;
        int h1,m1,s1,h2,m2,s2;
        scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
        int temp1=h1*3600+m1*60+s1;
        int temp2=h2*3600+m2*60+s2;
        if(temp1<minn){
            minn=temp1;
            unlocked=id;
        }
        if(temp2>maxn){
            maxn=temp2;
            locked=id;
        }
    }
    cout<<unlocked<<" "<<locked;
    return 0;
}
