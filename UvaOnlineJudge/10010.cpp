#include<iostream>
#include<stdio.h>
#include<vector>
#include<cctype>

using namespace std;

vector<pair<int,int> >ind[150];
string s[100];
int n,m;
pair<int,int>p;

void clr(){
    for(int i=50;i<130;i++) ind[i].clear();
}

int dx[]={-1,1,0,0,-1,1,-1,1};
int dy[]={-1,1,-1,1,0,0,1,-1};

char low(char a){
    int t;
    if(a>='A'&&a<='Z'){
        t = a - 'A';
        a = t + 'a';
        return a;
    }
    else return a;
}



bool rec(int r,int c,int len,string mn,int dx,int dy){
    if(r<0||c<0||r==n||c==m) return false;
    //cout<<tolower(mn[len-1])<<" "<<tolower(s[r][c])<<endl;
    if(tolower(mn[len-1])!=tolower(s[r][c])) return false;
    //st = st + s[r][c];
    int l1 =  mn.size();
    if(len==l1) return true;
    bool stat = rec(r+dx,c+dy,len+1,mn,dx,dy);
    if(stat==true) return true;
    return false;

}

bool prerec(int r,int c,int len,string mn){
    if(tolower(mn[len-1])!=tolower(s[r][c])) return false;
    //st = st + s[r][c];
    int l1 =  mn.size();
    if(len==l1) return true;

    bool stat;
    for(int i=0;i<8;i++){
        stat = rec(r+dx[i],c+dy[i],len+1,mn,dx[i],dy[i]);
        if(stat==true) return true;
    }
    return false;
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    int q;
    string tmp;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                   p = make_pair(i,j);
                   ind[tolower(s[i][j])].push_back(p);
            }
        }
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>tmp;
            int val = tolower(tmp[0]);
            for(int j=0;j<ind[val].size();j++){
                bool ret;
                ret = prerec(ind[val][j].first,ind[val][j].second,1,tmp);
                if(ret==true){
                    cout<<ind[val][j].first+1<<" "<<ind[val][j].second+1<<endl;
                    break;
                }
            }
        }
        clr();
        if(t) printf("\n");
    }
}
