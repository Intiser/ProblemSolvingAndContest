#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,m,t,rslt,tot,a,b;
    char c;
    cin>>t;
    while(t--){
            cin>>c;
            cin>>m;
            cin>>n;
            if(c=='r'||c=='Q'){
                if(m>n) rslt=n;
                else rslt=m;
            }
            else if(c=='k'){
                tot=m*n;
                if(tot%2==0) rslt=tot/2;
                else rslt = tot/2+1;
            }
            else if(c=='K'){
                if(m%2==0) a=m/2;
                else a=m/2+1;

                if(n%2==0) b=n/2;
                else b=n/2+1;

                rslt=a*b;
            }

            cout<<rslt<<endl;
    }

}
