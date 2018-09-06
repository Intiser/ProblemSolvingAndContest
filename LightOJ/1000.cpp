#include<stdio.h>

int main(){
    int t;
    int a,b;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d %d",&a,&b);
        int ans = a+ b;
        printf("Case %d: %d\n",cas,ans);
    }
}
