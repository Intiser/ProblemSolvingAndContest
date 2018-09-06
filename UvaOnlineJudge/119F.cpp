#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>

using namespace std;

map<string,int> m;
vector<string> s;

int main(){
    int n,am,dv,frnd,fl = 0;
    string tmp;
    while(cin>>n){
        if(fl==1) printf("\n");
        fl = 1;
        for(int i=0;i<n;i++){
            cin>>tmp;
            s.push_back(tmp);
            m[tmp] = 0;
        }
        for(int i=0;i<n;i++){
            cin>>tmp;
            cin>>am;
            cin>>frnd;
            if(frnd!=0)
            dv = am/frnd;
            else
            dv = 0;

            m[tmp] = m[tmp] - dv*frnd;
            for(int j=0;j<frnd;j++){
                cin>>tmp;
                m[tmp] = m[tmp] + dv;
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i]<<" "<<m[s[i]]<<endl;
            m[s[i]] = 0;
        }
        s.clear();
    }
}
