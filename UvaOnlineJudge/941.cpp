#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli long long int

lli arr[130];
lli flag[130];
lli fac[130];

lli fact(lli n){
    if(n==1||n==0) return 1;
    return n*fact(n-1);
}

int main(){
    fac[0]=1;
    for(int i =1;i<=20;i++ )
        fac[i] = fac[i-1]*i;
   freopen("in.txt","r",stdin);
   freopen("out.txt","w",stdout);
   string s;
   string trans,temp;
   string ans;
   //cin>>s;
    lli t,n,in;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>n;
        lli len=s.size();
        for(int i=0;i<len;i++){
            arr[s[i]]=1;
        }
        for(int i=0;i<130;i++){
            if(arr[i]){
                trans.push_back(i);
            }
            arr[i]=0;
        }

        lli tot=n,mul;
        lli fct;
        lli l = len , a;
        for(int i=0 ;i <130 ;i++) flag[i] = i;
        for(int i=1;i<=len;i++){

            fct = fac[len-i];
            mul = tot/fct;
            tot = tot - mul * fct ;
            ans+=(trans[mul]);
            temp = trans;
            trans.clear();
            for(int j=0;j<l;j++){
                if(flag[j]!=mul) trans+=(temp[j]);

            }
        }
        cout<<ans<<endl;
        ans.clear();
        trans.clear();
        s.clear();
        for(int i =0 ;i < 130 ; i++ ){
            flag[i]=0;
            arr[i] =0;
        }
    }

}
