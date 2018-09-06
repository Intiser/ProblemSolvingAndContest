#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

map<string,int>word;
int crnt = 1;

void val(int n,string s,int len){
    if(len == 0) {
        //cout<<s<<" "<<crnt<<endl;
        word[s] = crnt;
        crnt++;
        return;
    }
    string tmp = s;
    for(int i=n+1;i<26;i++){
        tmp.push_back(i+'a');
        val(i,tmp,len-1);
        tmp.clear();
        tmp = s;
        //cout<<"  "<<i<<endl;
    }
}

void ok(int l){

}

int main(){
    val(-1,"",1);
    val(-1,"",2);
    val(-1,"",3);
    val(-1,"",4);
    val(-1,"",5);
    string s;
    while(cin>>s){
        cout<<word[s]<<endl;
    }
}
