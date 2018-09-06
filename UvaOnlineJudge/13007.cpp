#include<iostream>
#include<stdio.h>

using namespace std;

int tot[105];
int decs[105];
int bug[105];
int res[105];

int main(){
    int arr[5] = {1,10,100,1000,10000};
    int n,m,a;
    while(cin>>n>>m){
        for(int i=0;i<m;i++){
            scanf("%d",&bug[i]);
            scanf("%d",&decs[i]);
            tot[i] = 0;
            for(int j=1;j<n;j++){
                scanf("%d",&a);
                tot[i] += a;
            }
            if(tot[i]+decs[i]<=bug[i]){
                res[i] = 1;
            }
            else
                res[i] = -1;
        }
        int ans = 0,t;
        int temp, in;
        for(int i=0;i<m;i++){
            temp = tot[i];
            in = 0;
            t = 0;
            while(temp<=bug[i]&&in<5){
                temp = temp + arr[in];
                if(temp<=bug[i]){
                    temp = temp - arr[in];
                    t = arr[in];
                    in++;
                    //cout<<t<<" "<<bug[i]<<" "<<temp<<endl;
                }
            }
            if(res[i]==-1)
                ans = ans +t;
            else if(res[i]==1&&t>decs[i]){
                    ans = ans + (t-decs[i]);
            }
            //cout<<ans<<" "<<tot[i]<<endl;
        }
        cout<<ans<<endl;
        for(int i=0;i<100;i++){
            tot[i] = 0;
            decs[i] = 0;
            bug[i] = 0;
        }
   }
}
