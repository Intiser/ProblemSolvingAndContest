#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

map<string,int> nam;
vector<string> tree;

void clr(){
    int len = tree.size();
    for(int i=0;i<len;i++) {
        nam[tree[i]] = 0;
    }
    tree.clear();
}

void result(int tot){
    int d;
    int len = tree.size();
    for(int i=0;i<len;i++) {
        d = nam[tree[i]];
        cout<<tree[i]<<" ";
        printf("%.4lf\n",double(d)/double(tot)*100);
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    double fr;
    string s;
    int t,cnt,st = 0;
    cin>>t;
    cin.ignore();
    getchar();
    while(t--){
        cnt = 0;

        st++;
        while(getline(cin,s)){
            if(s.size()==0) break;
            cnt++;
            if(nam[s]==0){
                tree.push_back(s);
            }
            nam[s]++;
        }
        sort(tree.begin(),tree.end());
        result(cnt);
        clr();
        if(t) printf("\n");
    }
}
