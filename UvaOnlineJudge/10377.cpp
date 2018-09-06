#include<iostream>
#include<stdio.h>

using namespace std;

string in[100];
string cmnd;
char ch[100][100];
int n,m;
int x,y;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char dir[]={'N','E','S','W'};
int now;

void next(char c){
    if(c=='R'){
        now++;
    }
    else if(c=='L') now--;
    if(now<0) now = 3;
    if(now==4) now = 0;
   // cout<<dir[now]<<endl;
}

bool checkP(int X,int Y){
    if(ch[X][Y]==' ') return true;
    return false;
}

void go(){
    int len = cmnd.size();
    for(int i=0;i<len;i++){
        if(cmnd[i]=='Q') return;
        if(cmnd[i]=='R'){
            next('R');
        }
        else if(cmnd[i]=='L'){
            next('L');
        }
        else if(cmnd[i]=='F'&&checkP(x+dx[now],y+dy[now])){
            x = x + dx[now];
            y = y + dy[now];
            //cout<<x+1<<" "<<y+1<<" "<<dir[now]<<endl;
        }

    }
}

void convert(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ch[i][j] = in[i][j];
        }
    }
}

void start(){
    now = 0;
    convert();
    go();
}

bool checkQ(string s){
    int len = s.size();
    for(int i=0;i<len;i++) if(s[i]=='Q') return false;
    return true;
}


int main(){
    //freopen("in.txt","r",stdin);
    int t;
    string tmp;
    cin>>t;
    int a,b;
    while(t--){
        cin>>n>>m;
        cin.ignore();
        for(int i=0;i<n;i++){
            getline(cin,in[i]);
        }
        cin>>a>>b;
        cin.ignore();
        cmnd = "";
        getline(cin,tmp);
        while(checkQ(tmp)){
            cmnd = cmnd + tmp;
            getline(cin,tmp);
        }
        cmnd = cmnd + tmp;
        //cout<<cmnd<<endl;
        x = a-1;
        y = b-1;
        start();
        cout<<x+1<<" "<<y+1<<" "<<dir[now]<<endl;
        if(t) printf("\n");
    }
}
