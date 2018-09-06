#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

struct node{
    string s;
    int chng;
};

map<string,int>dict;
map<string,int>used;
queue<node>q;
vector<string>g[100];

string change(int in,string s,char c){
    string t;
    int siz = s.size();
    t = t + s.substr(0,in);
    t = t + c;
    t = t + s.substr(in+1,siz-(in+1));
    return t;
}

bool check(int in,string s,char c){
    string t = change(in,s,c);
    cout<<t<< " "<<dict[t]<<endl;
    if(dict[t]==1) return true;
    return false;
}

node crt(string s,int n){
    node no;
    no.s = s;
    no.chng = n;
    return no;
}

int compare(string a,string b){
    int n = a.size();
    int cnt = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) {
            cnt++;
            index = i;
        }
    }
    if(cnt==1)return index;
     return -1;
}


int bfs(string st,string fn){
   // cout<<"yes"<<endl;
    node no;
    no.s = st;
    no.chng = 0;
    q.push(no);
    //cout<<q.size()<<endl;
    while(!q.empty()){
        no = q.front();
        q.pop();
        //cout<<no.s<<endl;

        if(no.s == fn) return no.chng;
        used[no.s] = 1;
        string str = no.s;
        int siz = str.size();
        //cout<<siz<<endl;
        for(int i=0;i<g[siz].size();i++){
            //cout<<check(i,str,fn[i])<<endl;
            int v = compare(str,g[siz][i]);
            if(v!=-1&&used[g[siz][i]]==0){
                node nw;
                nw.s = change(v,str,g[siz][i][v]);
                nw.chng = no.chng + 1;
                q.push(nw);
            }
        }
        //cout<<q.size()<<endl;
    }
    return 0;
}

void clr(){
    while(!q.empty())q.pop();
    dict.clear();
    for(int i=0;i<11;i++) g[i].clear();
}

void use(){
    used.clear();
    while(!q.empty()) q.pop();
}

int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    string s,a,b;
    int t;
    cin>>t;
    //cin.ignore();
    while(t--){
        while(cin>>s){
            if(s=="*") break;
            dict[s] = 1;
            int len = s.size();
            g[len].push_back(s);
        }
        //cout<<"yes"<<endl;
        cin.ignore();
        while(getline(cin,s)){
                //cout<<s.size()<<endl;
            if(s.size()==0) break;
            int c = 0;
            int siz = s.size();
            a = ""; b = "";
            for(int i=0;i<siz;i++){
                if(c==0&&s[i]>='a'&&s[i]<='z'){
                    a = a + s[i];
                }
                else if(c==1&&s[i]>='a'&&s[i]<='z'){
                    b = b + s[i];
                }
                if(s[i]==' ') c = 1;
            }

            cout<<a<<" "<<b<<" ";
            cout<<bfs(a,b)<<endl;
            use();
        }
        //cout<<"yes"<<endl;
        if(t>0) printf("\n");
        clr();
    }
}
