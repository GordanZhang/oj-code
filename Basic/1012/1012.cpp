//A1 = 能被5整除的数字中所有偶数的和； 
//A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...； 
//A3 = 被5除后余2的数字的个数；
//A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
//A5 = 被5除后余4的数字中最大数字。
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int A1=0,A2=0,A3=0,A5=0;
	float A4=0.0;
	int *a=new int [N];
	int *b=new int [N];
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	int temp=0,cnt=0;
	for(int i=0;i<N;i++)
	{
		if(a[i]%10==0)
		{
			A1=A1+a[i];
			flag1=1;
		}
		if(a[i]%5==1)
		{
			b[temp++]=a[i];
			flag2=1;
		}
		if(a[i]%5==2)
		{
			A3++;
			flag3=1;
		}
		if(a[i]%5==3)
		{
			A4+=a[i];
			cnt++;
			flag4=1;
		}
		if(a[i]%5==4)
		{
			if(A5<a[i])
			  A5=a[i];
			flag5=1;
		}
	}
	for(int i=0;i<temp;i++)
	{
		if(i==0||i%2==0)
		A2 += b[i];
		else 
		A2 -= b[i];
	}
	A4=A4/cnt;
	if (flag1 == 0)
        cout << "N ";
    else
        cout << A1 << " ";
    if (flag2 == 0)
        cout << "N ";
    else
        cout << A2 << " ";
    if (flag3 == 0)
        cout << "N ";
    else
        cout << A3 << " ";
    if (flag4 == 0)
        cout << "N ";
    else
        printf("%.1f ",A4);
    if (flag5 == 0)
        cout << "N";
    else
        cout << A5;
	delete[] a;
	delete[] b;
	return 0;
}
