#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    if(c!=0){
        if(c>0&&a<=b)
        d = (b - a)%c;
        else if(c<0&&b<=a)
        d = (a - b)%c;
        else
        d = 1;

        if(d==0) printf("YES\n");
        else printf("NO\n");
    }
    else{
        if(a==b)printf("YES\n");
        else printf("NO\n");
    }
}
