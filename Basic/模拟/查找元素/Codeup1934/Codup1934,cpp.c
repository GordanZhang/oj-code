#include <stdio.h>
#define maxn 205
int a[maxn];
int main()
{
    int n,x,i;
    while(~scanf("%d",&n))
    {
        for(i=0;i<n;i++){
          scanf("%d",&a[i]);
        }
        scanf("%d",x);
        int k;
        for(k=0;k<n;k++){
        if(a[k]==x)
        {
            printf("%d\n",k);
            break;
        }

        }
        if(k==n){
            printf("-1\n");
        }

    }

    return 0;
}
