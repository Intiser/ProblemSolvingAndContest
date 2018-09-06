#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

struct node{
    int r;
    int c;
    int dis;
    node(){
    }
};

int arr[1050][1050];
int flag[1050][1050];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int R,C;

int bfs(int r,int c){
    node st;
    node no;
    st.r = r;
    st.c = c;
    st.dis = 0;
    flag[r][c] = 1;
    queue<node>q;
    q.push(st);
    while(!q.empty()){
        st = q.front();
        q.pop();
        if(arr[st.r][st.c]==2){
            return st.dis;
        }
        //flag[st.r][st.c] = 1;
        for(int i=0;i<4;i++){
            int x = dx[i] + st.r;
            int y = dy[i] + st.c;
            if(x>=0&&x<R&&y>=0&&y<C&&flag[x][y]==0&&arr[x][y]!=1){
                no.r = x;
                no.c = y;
                no.dis = st.dis + 1;
                q.push(no);
                flag[x][y] = 1;
            }
        }
    }
    return 0;
}

void init(){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            arr[i][j] = 0;
            flag[i][j] = 0;
        }
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    while(cin>>R>>C){
            if(R==0&&C==0) break;
        init();
        int n,r,c,cn;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>r;
            cin>>c;
            for(int j=0;j<c;j++){
                cin>>cn;
                arr[r][cn] = 1;
            }
        }
        int str,stc;
        int enr,enc;
        cin>>str>>stc;
        cin>>enr>>enc;
        arr[enr][enc] = 2;
        cout<<bfs(str,stc)<<endl;
        init();
    }
}
