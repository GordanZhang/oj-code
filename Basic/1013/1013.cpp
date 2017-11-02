#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		return false;
		
	}
	return true;
}
int main()
{
	int M,N;
	int count;
	cin>>M>>N;
	int t = 0;
    int k = 2;
    int a[10000];
    int j = 0;
    while (t < N) {
        if (isprime(k)) {
            t++;
            if (t >= M)
                a[++j] = k;
        }
        k++;
    }
    int row = j / 10;
    if (j % 10 == 0)
        row = row - 1;
    for (int i = 0; i < row; i++) {
        for (int k = 1; k < 10; k++) {
            cout << a[10 * i + k] << " ";
        }
        cout << a[(i + 1) * 10] << endl;
    }
    for (int i = row * 10 + 1; i < j; i++) {
        cout << a[i] << " ";
    }
    cout << a[j]; 
	return 0;
}
