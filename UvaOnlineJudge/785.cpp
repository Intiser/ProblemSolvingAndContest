#include<iostream>
#include<stdio.h>

using namespace std;

string s[100];
char c[100][100];
int in;
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

int check(string st){
    int l = st.size();
    for(int i=0;i<l;i++) if(st[i]!='_') return 0;
    return 1;
}

void convert(){
    for(int i=0;i<in;i++){
        for(int j=0;j<s[i].size();j++){
            c[i][j] = s[i][j];
        }
    }

}

void floodfill(int r,int cl,char ch){
        //cout<<"yes"<<" "<<r<<" "<<c<<endl;
        if(r<0||r==in) return ;
        if(c[r][cl]!=' ') return ;
        c[r][cl] = ch;
        cout<<"yes 1"<<endl;
        for(int i=0;i<4;i++){
            int x = r + dx[i];
            int y = cl + dy[i];
            floodfill(x,y,ch);
        }

}

void start(){
    for(int i=0;i<in;i++){
        for(int j=0;j<s[i].size();j++){
            if(s[i][j]!=' ') {
                //cout<<"yes"<<endl;
                floodfill(i,j,s[i][j]);
                //c[i][j] = '*';
            }
        }
    }
}

void print(){
    for(int i=0;i<in;i++){
        for(int j=0;j<s[i].size();j++){
           cout<<c[i][j];
        }
        cout<<endl;
    }
    cout<<s[in]<<endl;
}

int main(){
    int t;
    //cin>>t;
    //cin.ignore();
    while(getline(cin,s[0])){
        in = 1;
        if(check(s[0])== 0)
        while(getline(cin,s[in])){
            if(check(s[in]))
                break;
            in++;
        }
        convert();
        start();
        print();
    }
}

