#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100500];

void sieve(){
    for(int i=4;i<=100000;i+=2) flag[i]++;
    flag[0] = 1;
    flag[1] = 1;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
            for(int j=i+i;j<=100000;j+=i){
                flag[j]++;
            }
        }
    }
    //cout<<flag[2]<<endl;
    //cout<<flag[3]<<endl;
}

bool isPrime(int n){
    if(flag[n]==0) return true;
    return false;
}

int integer(string s){
    int tmp = 0;
    int l1 =s.size();
    for(int i=0;i<l1;i++){
        tmp = tmp*10 + (s[i] - '0');
    }
    return tmp;
}

int check(string s){
    int l = s.size();
    int st = 5;
    if(l<6) st = l;
    int fl = 0;
    int mx = -1;
    string t;
    for(int i=st;i>0;i--){
        for(int j=0;j<l-i+1;j++){
            t = s.substr(j,i);
            int tmp = integer(t);
            //cout<<tmp<<" "<<t<<endl;
            if(isPrime(tmp)==true){
                //fl = 1;
                if(tmp>mx) mx = tmp;
                //cout<<mx<<endl;
            }
        }
        //if(fl==1) return mx;
    }
    return mx;
}

int main(){
    //cout<<isPrime(101)<<endl;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sieve();
     //cout<<isPrime(101)<<endl;
    string s;
    while(getline(cin,s)){
        if(s=="0") break;
        cout<<check(s)<<endl;
    }
}
