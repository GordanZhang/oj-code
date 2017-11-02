#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int cmp(int a,int b){
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	int *a= new int [n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	int t;
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		t=a[i];
		while(t!=1&&t!=999)
		{
			if(t%2==0)
			{
				t=t/2;
			}
			else{
				t=(3*t+1)/2;
			}
			for(int j=0;j<n;j++)
			{
				if(t==a[j]&&j!=i)
				  a[j]=999;
			}
		}
	}
	sort(a,a+n,cmp);
	int temp=0;
	for(int k=n-1;k>=0;k--){
		if(a[k]!=999)
		temp=k;
	}
	for(int m=temp;m<n-1;m++)
	{
		cout<<a[m]<<" ";
	}
	cout<<a[n-1];
	delete[] a;
	return 0;
}
