#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;
#define lli long long int

map<string,lli> values;
string s;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli n,m,d;
    string wrd;
    string tmp;
    lli totalcost = 0;
    while(cin>>n>>m){
            values.clear();
        for(int i=0;i<n;i++){
            cin>>wrd>>d;
            values[wrd] = d;
        }
        while(m--){
            totalcost = 0;
            while(getline(cin,s)){
                if(s==".") break;
                int len = s.size();
                tmp = "";
                for(int i=0;i<len;i++){
                    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                        tmp.push_back(s[i]);
                    }
                    else{
                        totalcost += values[tmp];
                        tmp = "";
                    }
                }
                totalcost += values[tmp];
                tmp = "";
            }
            cout<<totalcost<<endl;
        }
    }
}
