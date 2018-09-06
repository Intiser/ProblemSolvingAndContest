#include<iostream>
#include<stdio.h>

using namespace std;

int p[100000];
int suc;
int unsuc;
void init(int n){
    for(int i=1;i<=n;i++) p[i] = i;
    suc = 0;
    unsuc = 0;
}

int Find(int u){
    if(p[u]==u) return u;
    p[u] = Find(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[Find(v)] = Find(u);
}

void check(int x,int y){
    if(Find(x)==Find(y)){
        suc++;
        return;
    }
    unsuc++;
    return;
}

int main(){
    int t;
    int n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        init(n);
        cin.ignore();
        while(getline(cin,s)){
            if(s.size()==0) break;
            char c;
            int x,y;
            int len = s.size();
            c = s[0];
            int fl = 0;
            int cnt = 0;
            for(int i=1;i<len;i++){
                if(s[i]==' '&&cnt>0){
                    fl++;
                    if(fl==1) x = cnt;
                    else {
                        y = cnt;
                        break;
                    }
                    cnt = 0;

                }
                else if(s[i]==' '){

                }

                if(s[i]>='0'&&s[i]<='9'){
                    cnt = cnt*10 + s[i]-'0';
                }
            }
            if(cnt) y = cnt;
            if(c=='c'){
                Union(x,y);
            }
            else if(c=='q'){
                check(x,y);
            }
        }
        cout<<suc<<","<<unsuc<<endl;
        if(t) cout<<endl;
    }
}
