#include <cstdio>
#include <cstring>
char str[10000];
int len;
using namespace std;
bool checkA(int begin,int end)
{
	for(int i=begin;i<end;i++)
	if('A'!=str[i])
	    return false;
	return true;
}
bool check()
{
	int i,posP,posT;
	for(i=0;i<len;i++)
	{
		if('P'==str[i])
		posP=i;
		if('T'==str[i])
		posT=i;
	}
	if(checkA(0,posP)&&checkA(posP+1,posT)&&checkA(posT+1,len)&&posT-posP>1&&(posT-posP-1)*(posP)==len-posT-1)
	    return true;
	return false;
}
bool checkOne()
{
	for(int i=0;i<len;i++)
	  if(!('P'==str[i]||'A'==str[i]||'T'==str[i]))
	    return false;
	return true;
}
int main()
{
	int num;
	scanf("%d",&num);
	while(num--)
	{
		scanf("%s",&str);
		len=strlen(str);
		printf("%s\n",(checkOne()&&check())?"YES":"NO");
	}
	return 0;
}
