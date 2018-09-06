#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int lim,maxi,fl,n;
vector<int>ans;
vector<int>tmp;
vector<int>items;
int flag[100];

void check(int tot,int p){

    if(fl==1||tot>lim) return;
    //cout<<tot<<endl;
    if(lim==tot) {
        maxi = tot;
        ans = tmp;
        fl = 1;
        //cout<<tot<<" done "<<endl;
        return;
    }
     if(tot>maxi){
        maxi = tot;
        ans =tmp;
    }

    if(p==n) return;

    //cout<<" * "<<tot<<endl;

    for(int i=p;i<items.size();i++){
        if(!flag[i]){
            flag[i] = 1;
            tmp.push_back(items[i]);
            tot = tot + items[i];
            //cout<<lim<<" "<<tot<<" "<<i+1<<endl;;
            check(tot,i+1);
            flag[i] = 0;
            tmp.pop_back();
            tot = tot - items[i];
        }
    }
}

void result(){
    int tot;
    fl = 0;
    maxi = 0;
    for(int i=0;i<items.size();i++){
        tmp.push_back(items[i]);
        //tot = items[i];
        flag[i] = 1;
        check(items[i],i+1);
        flag[i] = 0;
        tmp.pop_back();

    }

}

void gen(){
    //if(ans.size())
    //cout<<ans[0];
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    //cout<<endl;

}

void clr(){
    ans.clear();
    tmp.clear();
    items.clear();
    for(int i=0;i<50;i++) flag[i] = 0;
    lim = 0;
    maxi = 0;
    fl = 0;
}

int main(){
    int a;
    while(cin>>lim){
        cin>>n;
        items.clear();
        for(int i=0;i<n;i++){
            cin>>a;
            items.push_back(a);
        }
        result();
        gen();
        cout<<"sum:"<<maxi<<endl;
        clr();
    }
}
