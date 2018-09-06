#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
    char c;
    int n,fr,fd,r,d,mn,tmp;
    while(cin>>n){
            cin.ignore();
        if(n==0) break;
        mn=2000001; fr=0; fd=0;
        for(int i=0;i<n;i++){
            c=getchar();
            if(c=='Z'){
                mn=0;
            }
            else if(c=='R'){
                r=i; fr=1;
            }
            else if(c=='D'){
                d=i; fd=1;
            }

            if(fd==1&&fr==1){
                if(r>d) tmp=r-d;
                else tmp=d-r;
                if(tmp<mn) mn=tmp;
            }

        }
        cout<<mn<<endl;
    }
}
