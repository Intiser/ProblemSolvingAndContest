#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int flag[500005];

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int n,tmp,cnt,ans,rmn;
    while(cin>>n){
        if(n==0) break;
        tmp=n/2;
        if(n%2==1) cnt=0;
        else cnt=1;
        for(int i=2;i<=n;i+=2)flag[i]=1;

        printf("Discarded cards:");
        if(n!=1){
            printf(" 1");
            for(int i=3;i<=n;i+=2)  printf(", %d",i);
        }
        rmn=n/2;

        while(tmp){
            for(int i=2;i<=n;i+=2){
                    if(rmn==1) break;

                if(flag[i]) {
                    if(cnt==1){
                    flag[i]=0;
                    printf(", %d",i);
                    cnt=0;
                    rmn--;
                    }
                    else{
                    cnt=1;
                    }
                }


            }
            tmp=tmp/2;
            if(rmn==1) break;
        }
        printf("\n");
        for(int i=2;i<=n;i+=2) if(flag[i]) ans=i;

        if(n==1) ans=1;

        printf("Remaining card: %d\n",ans);
        //cout<<ans<<endl;
    }
}

