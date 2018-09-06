#include<iostream>
#include<stdio.h>

using namespace std;

int flag[9999+10];

int main(){
    int z;
    int i;
    int m;
    int l;
    int cas = 1;
    while(cin>>z>>i>>m>>l){
        if(z==0&&i==0&&m==0&&l==0) break;
        int cnt = 1;
        int tmp = l;
        while(flag[tmp]==0){
            flag[tmp] = cnt;
            tmp = (tmp*z + i);
            tmp = (tmp)%m;
            cnt++;
            //cout<<tmp<<endl;
        }
        printf("Case %d: ",cas);
        cout<<cnt-flag[tmp]<<endl;
        for(int i=0;i<10000;i++) flag[i] = 0;
        cas++;
    }

}
