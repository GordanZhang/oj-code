#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	bool isFirst=true;
	while(~scanf("%d %d",&a,&b))
	{
		if(b==0) continue;
		if(!isFirst)
		  printf(" ");
		else 
		  isFirst=false;
		  printf("%d %d",a*b,b-1);
	}
	if(isFirst)
	  printf("0 0");
	return 0;
}
