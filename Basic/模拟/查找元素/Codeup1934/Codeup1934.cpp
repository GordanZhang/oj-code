#include<cstdio>
const int maxn = 201;
int a[maxn];    //��� n ����
int main(){
    int n, x;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);    //��������ѯ����
        int k;              //�±�
        for(k = 0; k < n; k++){ //��������
            if(a[k] == x){      //���ҵ��� x
            printf("%d\n", k);
            break;          //�˳�����
            }
        }

        if(k == n){         //��û���ҵ�
            printf("-1\n"); //��� -1
        }
    }

    return 0;
}
