#include<stdio.h>

int f[11][11];

int main(){
    int t;
    int n;
    int a,b;
    scanf("%d",&t);
    for(int cas = 1;cas<=t;cas++){
        scanf("%d",&n);
        if(n>10)
        printf("%d %d\n",n-10,n-(n-10));
        else
        printf("%d %d\n",0,n);

    }

}
