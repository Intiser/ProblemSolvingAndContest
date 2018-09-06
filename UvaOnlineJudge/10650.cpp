#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>


using namespace std;

int flag[100005];
int prime[100005];
vector<int>ans[100000];



int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=100000;j+=i)
        flag[j]++;
        }
    }
    int l=1;
    for(int i=0;i<in&&prime[i]<=32000;i++){
            if(prime[i+1]-prime[i]==prime[i+2]-prime[i+1]){
                ans[l].push_back(prime[i]);
                ans[l].push_back(prime[i+1]);
                ans[l].push_back(prime[i+2]);

               // cout<<prime[i]<<" "<<prime[i+1]<<" "<<prime[i+2];
                //cout<<ans[l][0]<<" "<<ans[l][1]<<" "<<ans[l][2];
                i+=2;
                if(prime[i+1]-prime[i]==prime[i]-prime[i-1]){
                    ans[l].push_back(prime[i+1]);
                    i++;
                    //cout<<" "<<prime[i]<<" "<<l; i--;
                    //cout<<" "<<ans[l][3];
                }
                //cout<<endl;
                l++;
                i--; i--;
                i++;
            }


    }
    //cout<<l<<endl;
    //cout<<prime[0]<<endl;

    int a,b,sm,bg,t;
    while(cin>>a>>b){
        if(a==0&&b==0) break;
         if(a>b){
            sm=b; bg=a;
        }else {
            bg=b; sm=a;
        }
        //cout<<"yes"<<endl;
        for(int i=1;i<l;i++){
                t=ans[i].size()-1;
            if(sm<=ans[i][0]&&bg>=ans[i][t]){
                cout<<ans[i][0];
                for(int k=1;k<ans[i].size();k++){
                     //printf(" %d",ans[i][k]);
                    cout<<" "<<ans[i][k];
                }
                printf("\n");
            }
        }
    }

}

