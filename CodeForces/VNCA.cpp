#include<iostream>
#include<stdio.h>

using namespace std;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int check(string s){
    int X = 0,Y = 0;
    int x = 0,y = 0;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='R'){
            x = x + dx[0];
            y = y + dy[0];
        }
        else if(s[i]=='L'){
            x = x + dx[1];
            y = y + dy[1];
        }
        else if(s[i]=='U'){
            x = x + dx[2];
            y = y + dy[2];
        }
        else if(s[i]=='D'){
            x = x + dx[3];
            y = y + dy[3];
        }
    }

    if(x==0&&y==0) {
        return 1;
    }
    return 0;

}

int main(){
    string s,t;
    int n,cnt=0;
   while(cin>>n){
    cin>>s;
    cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            t = s.substr(i,j);
            if(check(t)==1) {
                //cout<<t<<endl;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    }
}
