#include<iostream>
#include<stdio.h>
#include<map>
#include<algorithm>
#include<queue>
#include<deque>

using namespace std;

struct pnt{
    int rw;
    int cl;
    int ht;
    int cont;
};

pnt crt(int rw,int cl,int ht,int cont){
    pnt p;
    p.rw = rw;
    p.cl = cl;
    p.ht = ht;
    p.cont = cont;
    return p;
}

string s[35][35];
char c[35][35][35];
int used[35][35][35];

int dx[]={-1,1,0,0,0,0};
int dy[]={0,0,-1,1,0,0};
int dz[]={0,0,0,0,-1,1};

int n,m,h;
queue<pnt> qu;

bool check(pnt p){
    if(p.rw==n||p.rw<0) return false;
    if(p.cl==m||p.cl<0) return false;
    if(p.ht==h||p.ht<0) return false;
    if(c[p.rw][p.cl][p.ht]=='.'||c[p.rw][p.cl][p.ht]=='E') return true;
    used[p.rw][p.cl][p.ht] = 1;
    return false;
}

bool gotit(pnt p){
    if(c[p.rw][p.cl][p.ht]=='E') return true;
    return false;
}

void clr(){
    for(int i=0;i<31;i++){
        for(int j=0;j<31;j++){
            for(int k=0;k<31;k++){
                used[i][j][k] = 0;
            }
        }
    }
    while(!qu.empty()) qu.pop();
}

int bfs(int x,int y,int z){
    //pnt p = crt(x,y,z,0);
    clr();
    pnt p;
    p.rw = x;
    p.cl = y;
    p.ht = z;
    p.cont = 0;
    qu.push(p);
    used[p.rw][p.cl][p.ht] = 1;
    while(!qu.empty()){
        p = qu.front();
        if(gotit(p)) return p.cont;
        qu.pop();
        //cout<<p.rw<<" "<<p.cl<<" "<<p.ht<<endl;

        for(int i=0;i<6;i++){
            pnt pn;
            pn.cl = p.cl + dy[i];
            pn.rw = p.rw + dx[i];
            pn.ht = p.ht + dz[i];
            pn.cont = p.cont + 1;
            if(used[pn.rw][pn.cl][pn.ht]==0&&check(pn)){
                qu.push(pn);
                if(gotit(pn)) return pn.cont;
                used[pn.rw][pn.cl][pn.ht] = 1;
            }
            //cout<<pn.rw<<" "<<pn.cl<<" "<<pn.ht<<" "<<check(pn)<<" "<<gotit(pn)<<endl;
        }
    }
    return -1;
}



int start(){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<h;k++){
               if(c[i][j][k]=='S'){
                    return bfs(i,j,k);

               }
            }
        }
    }
    return -1;
}

void convert(int n,int m,int h){
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<h;k++){
                c[i][j][k] = s[i][j][k];
            }
        }
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int ans;

    while(cin>>n>>m>>h){
        if(n==0&&m==0&&h==0) break;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //scanf("%s",&c[i][j]);
                cin>>s[i][j];
            }
        }
        convert(n,m,h);
        //cout<<start()<<endl;
        ans =start();
        if(ans >= 0){
            cout<<"Escaped in "<<ans<<" minute(s)."<<endl;
        }
        else{
            printf("Trapped!\n");
        }
        //clr();
    }
}
