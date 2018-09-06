#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>

using namespace  std;

vector<string>org;
vector<string>q;
vector<string>nw;
vector<string>ans;
map<string,int>pos;
map<string,int>ind;
int cnt ;

bool check(int x){
    int siz = q.size();
    int key = ind[nw[x]];
    for(int i=x+1;i<siz;i++) {
        if(pos[nw[i]]<ind[nw[i]]) return 1;
        if(key>ind[nw[i]]) return 1;
    }
    return 0;
}

void print(){
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" "<<endl;
    }
    //for(int i=cnt-1;i>=0;i--) cout<<ind[i]<<endl;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        org.clear();
        q.clear();
        nw.clear();
        for(int i=0;i<n;i++){
            getline(cin,s);
            //org.push_back(s);
            q.push_back(s);
        }
        for(int i=0;i<n;i++){
            getline(cin,s);
            nw.push_back(s);
        }
            ans.clear();
        //while(check()==0){
            pos.clear();
            ind.clear();
            int siz = q.size();
            for(int i=0;i<siz;i++){
                pos[nw[i]] = i;
                ind[q[i]] = i;
            }
            cnt = 0;
            int mn = siz;
           /* for(int i=0;i<siz;i++){
                if(pos[nw[i]]>i){
                    ans.push_back(nw[i]);
                    if(pos[nw[i]]<mn) mn = pos[nw[i]];
                    cnt++;
                }
                else if((cnt==0||mn>i)&&pos[nw[i]]==i){
                    ans.push_back(nw[i]);
                    //cnt++;
                }
                //cout<<mn<<endl;
            }
            if(ans.size()==siz) ans.clear();*/
            // try something new
            /*ind.clear();
            int mx = -1;
            int fl = 0;
            for(int i=0;i<siz;i++){
                if(mx==-1){
                    if(pos[q[i]]>i){
                        mx = pos[q[i]];
                        fl = 1;

                    }
                    else{
                        ind[pos[q[i]]] = q[i];
                        cnt++;
                        cout<<pos[q[i]]<<" "<<q[i]<<endl;
                    }
                }else{
                    if(pos[q[i]]<mx){
                        ind[pos[q[i]]] = q[i];
                        cout<<pos[q[i]]<<" "<<q[i]<<endl;
                        cnt++;
                    }
                    else if(pos[q[i]]<i){
                        ind[pos[q[i]]] = q[i];
                        cnt++;
                        cout<<pos[q[i]]<<" "<<q[i]<<endl;
                    }
                    if(mx<pos[q[i]]) mx = pos[q[i]];
                }
            }*/
            // new try
            for(int i=0;i<n;i++){
                if(pos[nw[i]]<ind[nw[i]]){
                    ans.push_back(nw[i]);
                }
                else if(check(i)==1){
                    ans.push_back(nw[i]);
                }
            }

            print();
            //if(t)
            cout<<endl;
        //}
    }
}
