#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

int flag[100100];
vector<int>primes;
int ind = 0;

void seive(){
    primes.clear();
    for(int i=4;i<=100000;i+=2) flag[i]++;
    flag[0] = 1;
    flag[1] = 1;
    ind = 1;
    primes.push_back(2);
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
            //ind++;
            primes.push_back(i);
            for(int j=i+i;j<=100000;j=j+i)
                flag[j]++;
        }
    }
    //cout<<ind<<endl;
    //cout<<flag[2]<<endl;
    //cout<<flag[3]<<endl;
}

bool isPrime(int tmp){
    int siz = primes.size();
    for(int i=0;i<siz&&primes[i]*primes[i]<=tmp;i++){
        if(tmp%primes[i]==0) return false;
    }
    return true;
}

int ok[10500];


void dp(){
    int num;
    int cnt = 0 ;
    for(int i=0;i<=10000;i++){
        num = i*i + i + 41;
       //cout<<num<<endl;
        if(isPrime(num)==true) cnt++;
        ok[i] = cnt;
    }
}

int main(){
    seive();
    dp();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b;
    int tot;
    int okz;
    double a1,b1,ans;
    int nt;
    while(cin>>a>>b){
        //if(a==0&&b==0) break;
        if(a==0){
            tot = b+1;
            okz = ok[b];
        }
        else{
            tot = b - a + 1;
            okz = ok[b] - ok[a-1];
        }

        //ans = (double)(okz*100.0) / (tot*1.0);


        printf("%.2lf\n",(double)(okz*100.0)/(tot*1.0)+ 1e-9);
        //cout<<setprecision(4)<<ans<<endl;
    }
}
