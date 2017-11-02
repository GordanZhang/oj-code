#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++)
        sum+=(s[i]-'0');
    string ssum=to_string(sum);
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<arr[ssum[0]-'0'];
    for(int i=1;i<ssum.length();i++)
        cout<<" "<<arr[ssum[i]-'0'];
    return 0;
}
