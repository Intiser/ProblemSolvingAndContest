#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

struct node{
    string s;
    int a;

    node(string S,int A){
        s = S;
        a = A;

    }
    bool operator > (node n) const{
        return n.a > a;
    }
};

vector<node> pnt;


int main(){
    string st;
    int n;
    int a,b;
    cin >>n;
    for(int i=0;i<n;i++){
        cin>>st;
        if(st=="insert"){
            cin>>a;
            node nd = node(st,a);
            pnt.push_back(nd);
        }
        else if(st=="removeMin"){

        }
        else if(st=="getMin"){
            cin>>a;
        }
    }
}

