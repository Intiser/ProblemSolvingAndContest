#include<iostream>
#include<stdio.h>

using namespace std;

int n,m;
char c[100][100];
int x,y;
int flag[100][100];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int nmbr[1005];

int floodfill(int row,int col,int land,char chr){
    if(row<0) return 0;
    if(col<0) col = m-1;
    if(row==n) return 0;
    if(col==m) col = 0;
    if(c[row][col]!=chr) return 0;
    if(flag[row][col]==-1||flag[row][col]>0) return 0;
    flag[row][col] = land;
    int ret = 1;
    for(int i=0;i<4;i++){
        int nx = row + dx[i];
        int ny = col + dy[i];
        ret = ret + floodfill(nx,ny,land,chr);
    }
    return ret;
}

int start(){
    //int mx = 0;
    char chr = c[x][y];
    int ind = 1;
    floodfill(x,y,-1,chr);
    int mx = 0;
    int ret = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(flag[i][j]==0&&c[i][j]==chr){
                ret = floodfill(i,j,ind,chr);
                if(ret>mx) mx = ret;
                ind++;
            }
        }
    }
    return mx;
}

int plot(){
    int mx = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(flag[i][j]>0){
                nmbr[flag[i][j]]++;
            }
        }
    }
    for(int i=0;i<1000;i++){
        if(nmbr[i]>mx) mx = nmbr[i];
        nmbr[i] = 0;
    }
    return mx;
}

void clr(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            flag[i][j] = 0;
        }
    }
}
void print(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<flag[i][j];
        }
        cout<<endl;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int st = 0;
    while(cin>>n>>m){
        for(int i=0;i<n;i++) scanf("%s",&c[i]);
        cin>>x>>y;
        //x = x - 1;
        //y = y - 1;
        start();
        //print();
        cout<<plot()<<endl;
        clr();
        scanf("\n");
    }
}
