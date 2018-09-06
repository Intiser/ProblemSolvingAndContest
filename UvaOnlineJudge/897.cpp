#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int flag[10000500];
int prime[10000500];
int angr[1000000];
int in,an;

string gen(int n){
    string s;
    while(n/10){
        s.push_back(n%10);
        n = n/10;
    }
    s.push_back(n%10);
    reverse(s.begin(),s.end());
}

int genU(string s){
    int tot = 0,a;
    int len = s.size();
    cout<<"ok"<<endl;

    for(int i=0;i<len;i++){
        a = s[i] - '0';
        tot = tot*10 + a;
        cout<<tot<<endl;
    }
    cout<<tot<<endl;
    return tot;
}

int anagra(int n){
    string s = gen(n);
    int u;
    cout<<genU(s)<<endl;
    /*do{
        u = genU(s);

        if(flag[u])  return 0;
    }while(next_permutation(s.begin(),s.end()));*/

    return 1;
}

void primes(){
     in = 1,an = 0;
    flag[0]=1; flag[1]=1; prime[0]=2;
    angr[an] = 2; an++;
    for(int i=4;i<=10000000;i+=2) flag[i]++;
    for(int i=3;i<=10000000;i+=2){
        if(!flag[i]){
            prime[in]=i; in++;
            for(int j=i+i;j<=10000000;j+=i)
            flag[j]++;
        }
    }
    cout<<in<<" "<<prime[0]<<" "<<prime[1]<<endl;

}

void angram(){
    an = 0;
   /* for(int i=0;i<in;i++){
        if(anagra(prime[i])){
                angr[an] = i;
                an++;
        }
    }*/
    anagra(prime[0]);
    anagra(prime[100]);
    cout<<angr[0]<<" "<<angr[1];
}

int main(){
    primes();
    angram();
}

