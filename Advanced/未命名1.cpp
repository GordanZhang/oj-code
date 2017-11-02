#include<stdio.h>
int main()
{
	int h=0,n=10086,z=0;
	scanf("%d",&n);
	for (;;)
	{
		h+=n%10;
		n=n/10;
		if(n<1)break;
	};
	for (;;)
	{
	z=h%10;
	if (z==0) printf("ling ");
	if (z==1) printf("yi ");
	if (z==2) printf("er ");
	if (z==3) printf("san ");
	if (z==4) printf("si ");
	if (z==5) printf("wu ");
	if (z==6) printf("liu ");
	if (z==7) printf("qi ");
	if (z==8) printf("ba ");
	if (z==9) printf("jiu ");
	h=h/10;
	if(h<1)break; 
	};
	getchar( );
	return 0;
}
