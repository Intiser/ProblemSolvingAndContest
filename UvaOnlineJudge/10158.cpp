#include<iostream>
#include<stdio.h>

using namespace std;

int f[100000];
int e[100000];

void init(int n){
    for(int i=0;i<n;i++){
        f[i] = i;
        e[i] = i;
    }
}

int FindF(int x){
    if(f[x]==x) return x;
    f[x] = FindF(f[x]);
    return f[x];
}

int FindE(int x){
    if(e[x]==x) return x;
    e[x] = FindE(e[x]);
    return e[x];
}

int UnionF(int u,int v){
    if(FindE(u)==FindE(v)) return -1;
    f[FindF(v)] = FindF(u);
    return 0;
}

int UnionE(int u,int v){
    if(FindF(u)==FindF(v)) return -1;
    e[FindE(v)] = FindE(u);
    return 0;
}

int areF(int u,int v){
    if(FindF(u)==FindF(v)) return 1;
    return 0;
}

int areE(int u,int v){
    if(FindE(u)==FindE(v)) return 1;
    return 0;
}

int main(){
    int n;
    while(cin>>n){
        int a,b,c;
        int ret;
        init(n);
        while(cin>>a>>b>>c){
            if(a==0&&b==0&&c==0) break;
            if(a==1){
                ret = UnionF(b,c);
                if(ret==-1)
                cout<<ret<<endl;
            }
            else if(a==2){
                ret = UnionE(b,c);
                if(ret==-1)
                cout<<ret<<endl;
            }
            else if(a==3){
                ret = areF(b,c);
                cout<<ret<<endl;
            }
            else if(a==4){
                ret = areE(b,c);
                cout<<ret<<endl;
            }
        }
    }
}
