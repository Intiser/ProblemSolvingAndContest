#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

#define lli long long int

vector<lli>lists;
lli arr[]={2,3,5,7};
lli fin[8500];
map<lli,lli> done;

void calcul(){
    lli pre = 0;
    lli siz = lists.size();
    while(siz<=5842){
        //cout<<"yes"<<endl;
        siz = lists.size();
        if(pre==siz) break;
        //cout<<"yes"<<endl;
        for(lli i=0;i<4;i++){
            //cout<<"yes"<<endl;
            for(lli j=0;j<siz;j++){
                lli v = lists[j]*arr[i];
                if(done[v]==0&&v>0&&v<=2000000000){
                    lists.push_back(v);
                   // cout<<v<<" "<<arr[i]<<" "<<lists[j]<<endl;
                   //cout<<v<<endl;
                }
                done[v]=1;

            }
            //cout<<"yes "<<i<<endl;
        }
        pre = siz;
        siz = lists.size();
        //cout<<"yes "<<siz<<endl;
    }

    sort(lists.begin(),lists.end());
    int sizz = lists.size();
    fin[0] = 0;
    for(int i=0;i<=sizz;i++){
        fin[i+1] = lists[i];
        //cout<<fin[i+1]<<endl;
    }
    //&&(lists[j]*arr[i]<=20000000000)
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lists.push_back(1);
    calcul();
    int n;
    while(cin>>n){
            if(n==0) break;
           cout<<"The "<<n;
           if(n%10==1 && (n % 100) / 10 != 1){
                cout<<"st";
           }
           else if(n%10==2 && (n % 100) / 10 != 1){
                cout<<"nd";
           }
           else if(n%10==3 && (n % 100) / 10 != 1){
                cout<<"rd";
           }
           else{
                cout<<"th";
           }
           cout<<" humble number is "<<fin[n]<<"."<<endl;
    }
}
