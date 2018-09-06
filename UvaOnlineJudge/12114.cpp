#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int s,b;
    double rat,nex;
    int cas = 1;
    while(cin>>s>>b){
        if(s==0&&b==0) break;
        rat = (s*1.0) / b;
        if((b-1)!=0)
        nex = ((s-1)*1.0) / (b - 1);
        if(rat>1) rat = 1;
        if(nex>1) nex = 1;
        if(b==1){
            printf("Case %d: :-\\\n",cas);
        }
        else if(rat == nex){
            printf("Case %d: :-|\n",cas);
        }
        else if(rat > nex){
            printf("Case %d: :-(\n",cas);
        }
        else if(rat < nex){
            printf("Case %d: :-)\n",cas);
        }
        cas++;
    }
}
