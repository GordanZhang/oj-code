#include <string>
#include <iostream>
#include <cstdio>
using namespace std;
void static read(char char_number);
int main()
{
	string input;
	cin>>input;
	unsigned int sum=0;
	for(unsigned int i=0;i<input.length();i++)
	{
		sum+=(unsigned int)input[i]-48;
	} 
	//sumװ�뵹����ַ��� 
	string number_sum="";
	while(1)
	{
		number_sum+=(char)(sum%10+48);
		sum/=10;
		if(sum/10==0)
		{
			if(sum%10!=0)
			{
				number_sum+=(char)(sum%10+48);
			}
			break;
		}
	}
	//��Ϊ�����ַ��� 
	string result="";
	for(int i=number_sum.length()-1;i>=0;i--)
	{
		result+=number_sum[i];
	}
	//������
	for(int i=0;i<result.length();i++) 
	{
		read(result[i]);
		if(i!=result.length()-1)//���ҽ���������������ֲ������һ����ʱ��Ŵ�ӡ�ո�
		{
			cout<<" ";
		}
		else
		{
			
		}
	}
    return 0;
}
void static read(char char_number)
{
	switch((int)char_number-48)
	{
		case 0:
			cout<<"ling";
			break;
		case 1:
			cout<<"yi";
			break;
		case 2:
			cout<<"er";
			break;
		case 3:
			cout<<"san";
			break;
		case 4:
			cout<<"si";
			break;
		case 5:
			cout<<"wu";
			break;
		case 6:
			cout<<"liu";
			break;
		case 7:
			cout<<"qi";
			break;
		case 8:
			cout<<"ba";
			break;
		case 9:
			cout<<"jiu";
			break;
	}
}
