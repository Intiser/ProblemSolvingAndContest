#include<iostream>
#include<stdio.h>

using namespace std;

int nn[1100000];
int nod[1100000];
int ans[1100000];

void pre(){
    for(int i=1;i<=1000000;i++){
        for(int j=i;j<=1000000;j=j+i) nn[j]++;
    }
    nod[0] = 1;
    int st = 0;
    ans[1] = 1;
    for(int i=1;i<=1000000;i++){
        nod[i] = nod[i-1] + nn[nod[i-1]];
        //cout<<i<<" "<<nod[i]<<endl;
        ans[nod[i]]++;
        st = i;
        if(nod[i]>1000000) break;
    }
    for(int i=1;i<=1000000;i++){
        ans[i] = ans[i] + ans[i-1];
    }
    //cout<<ans[1000000]<<endl;

}

int main(){
    //freopen("out.txt","w",stdout);
    pre();
    int t;
    int a,b;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>a>>b;
        cout<<"Case "<<cas<<": ";
        cout<<ans[b]-ans[a-1]<<endl;
    }
}
