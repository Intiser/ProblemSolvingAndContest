#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

queue<int>q;
int fl[100][100];
int g[100][100];
pair<int,int> p[100];
int Dx[] ={-2,-2,+2,+2,-1,+1,-1,+1};
int Dy[] ={-1,+1,-1,+1,-2,-2,+2,+2};

int bfs(int x,int y,int dx,int dy){
    if(x==dx&&y==dy) return 0;
    fl[x][y] = 1;
    int src  = g[x][y];
    q.push(src);
    int step = 1;
    int elem = 1;
    int next = 0;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        elem--;
        int X = p[s].first;
        int Y = p[s].second;
        for(int i=0;i<8;i++){
            int nx = X + Dx[i];
            int ny = Y + Dy[i];
            if(nx>0&&nx<=8&&ny>0&&ny<=8&&!fl[nx][ny]){
                fl[nx][ny] = 1;
                int v = g[nx][ny];
                q.push(v);
                next++;
                //cout<<" # "<<nx<<" "<<ny<<" from "<<X<<" "<<Y<<endl;
            }
            if(dx==nx&&dy==ny) return step;
        }
        if(elem == 0){
            step++;
             //cout<<" >> step "<<step<<endl;
            elem = next;
            next = 0;
        }
    }
    return -1;
}

void clr(){
     for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++)
            fl[i][j] = 0;
}

int main(){
    int in = 1;
    for(int i=1;i<=8;i++)
        for(int j=1;j<=8;j++){
           g[i][j] = in;
           p[in].first = i;
           p[in].second = j;
           in++;
        }
    string s1,s2;
    int sx,sy,ex,ey;
    while(cin>>s1>>s2){
        sx = s1[0] - 'a' + 1;
        sy = s1[1] - '0';
        ex = s2[0] - 'a' + 1;
        ey = s2[1] - '0';
        //cout<<" 1 "<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<endl;
        //cout<<" 2 "<<g[sx][sy]<<" "<<g[ex][ey]<<endl;
        //cout<<" 3 "<<p[g[sx][sy]].first<<" "<<p[g[sx][sy]].second<<" "<<p[g[ex][ey]].first<<" "<<p[g[ex][ey]].second<<endl;
        int res = bfs(sx,sy,ex,ey);
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<res<<" knight moves."<<endl;
        clr();
        while(!q.empty()) q.pop();
    }
}
