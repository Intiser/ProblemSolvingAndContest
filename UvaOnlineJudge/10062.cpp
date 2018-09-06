#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

pair<int,int> ans[250];
int arr[250];

bool compare(const pair<int,int> &lhs, const pair<int,int> &rhs){
    if(lhs.first!=rhs.first){
        return lhs.first<rhs.first;
    }else{
        if(lhs.second>rhs.second)
            return true;
        else
            return false;
    }
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    int len,cnt,c,fl=0;
    while(getline(cin,s)){
        len=s.size();

        if(fl==1) printf("\n");
        fl=1;
        cnt=0;
        for(int i=0;i<len;i++){
            if(s[i]>=32&&s[i]<=128){
            c=s[i];
            arr[c]++;
            if(arr[c]==1) cnt++;
            }
        }
        int in=0;
        for(int i=130;i>0;i--){
            if(arr[i]>0){
                ans[in].first=arr[i];
                ans[in].second=i;
                in++;
            }
            arr[i]=0;
        }
        sort(ans,ans+cnt,compare);

        for(int i=0;i<cnt;i++){
            printf("%d %d\n",ans[i].second,ans[i].first);
            ans[in].first=0;
            ans[in].second=0;
        }


    }
}
