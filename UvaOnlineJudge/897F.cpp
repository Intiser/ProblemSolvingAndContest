#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int flag[10000100];
int prime[10000100];
int ana[10000100];
int an;
int in;

void sieve(){
    flag[0] = 1;
    flag[1] = 1;
    prime[0] = 2;
    in = 1;
    for(int i=4;i<=10000000;i=i+2) flag[i]++;
    for(int i=3;i<=10000000;i=i+2){
        if(!flag[i]){
            prime[in] = i;
            in++;
            for(int j=i+i;j<=10000000;j=j+i) flag[j]++;
        }
    }
    //cout<<in<<endl;
    //cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;
}

int numberGen(vector<char> s){
       int t = 0,a;
       for(int i=0;i<s.size();i++){
            a = s[i] - '0';
            t = t * 10 + a;
       }
       return t;
}

vector<char> strGen(int n){
    vector<char> t;
    while(n/10){
        t.push_back(n%10+'0');
        n = n/10;
    }
     t.push_back(n%10+'0');
     reverse(t.begin(),t.end());
     return t;
}

void check(int n){
    vector<char> s;
    int len  = s.size();
    int tmp;
    s = strGen(n);
    sort(s.begin(),s.end());
    do{
        tmp = numberGen(s);
        if(flag[tmp]) return ;
    }while(next_permutation(s.begin(),s.end()));
    ana[an] = n;
    an++;
}

void checkall(){
    for(int i=0;i<in;i++){
        check(prime[i]);
    }
    //cout<<an<<endl;
}

int tenpow(int n){
    int tmp = 10;
    while(n/10){
        n = n/10;
        tmp = tmp * 10;
    }
    return tmp;
}

int result(int n){
    if(n==1) return 2;
    int bnd = tenpow(n);
    int tmp = 0;
    for(int i=0;i<an&&ana[i]<=n;i++){
            tmp = i;
    }

    if(tmp==an) return 0;
    tmp = ana[tmp+1];
    if(tmp>bnd) return 0;
    return tmp;

}

int main(){
    sieve();
    checkall();
    int n;
    while(cin>>n){
            if(n==0) break;
        //cout<<tenpow(n)<<endl;
        cout<<result(n)<<endl;
    }
}
