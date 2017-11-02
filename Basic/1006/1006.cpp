#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int b[3]={0};
	while(n!=0){
		b[i++]=n%10;
		n=n/10;
	}
	for(int k=0;k<b[2];k++)
	  cout<<"B";
	for(int k=0;k<b[1];k++)
	  cout<<"S";
	for(int k=0;k<b[0];k++)
	  cout<<k+1;
	return 0;
}
