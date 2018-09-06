#include<iostream>
#include<stdio.h>

using namespace std;

int arr[110];
int res[110];

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,tot,cnt,fl,ans,st;
   for(int x=13;x<=100;x++){
        n=x;
        ans= -1;
        for(int i=1;i<=250;i++){
            tot =n;
            cnt = i-1;
            fl=0;
            st = 1;
            for(int j=0;;st++){
                if(!arr[st-j*n]&&cnt==i-1){
                    arr[st-j*n] = 1;
                    tot--;
                    cnt = 0;
                    //cout<<st<<" "<<st-j*n<<" "<<i<<endl;
                }
                else if(!arr[st-j*n]){
                    cnt++;
                }
                if(arr[13]){
                    fl = 1;
                    break;
                }
                if(tot==1) break;
                if(st%n==0) j++;
            }
            if(tot==1&&fl==0&&!arr[13]){
                        ans=i;
            }
           // cout<<"####"<<i<<" "<<tot<<" "<<fl<<" "<<st<<endl;
            if(ans>0) break;
            for(int k=0;k<=n;k++) arr[k]=0;

        }
        res[x] = ans;
    }
    int t;
    while(cin>>t){
        if(t==0) break;
        cout<<res[t]<<endl;
    }
}
