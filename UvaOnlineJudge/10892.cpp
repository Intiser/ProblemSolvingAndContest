#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

#define lli long long int

vector<lli> vec;

lli gcd(lli a,lli b){
    if(b==0) return a;
    return gcd(b,a%b);
}

lli lcm(lli a,lli b){
    int r = (a*b)/gcd(a,b);
    return r;
}

void prm(lli n){
    vec.clear();

    lli t;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            t = n/i;
            vec.push_back(i);
            if(i!=t)
            vec.push_back(t);
        }
    }

    sort(vec.begin(),vec.end());
}

void ceck(){
  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<endl;
}

lli cont(lli n){
    lli cnt = 0;
    for(int i=0;i<vec.size();i++){
        for(int j=i;j<vec.size();j++){
                int f = lcm(vec[i],vec[j]);
                if(f == n) {
                    cnt++;
                    //cout<<vec[i]<<" "<<vec[j]<<endl;
                }
        }
    }
    return cnt;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli n;
    while(cin>>n){
        if(n==0) break;
        prm(n);
        //ceck();
        lli cnt = cont(n);
        cout<<n<<" "<<cnt<<endl;
    }
}
