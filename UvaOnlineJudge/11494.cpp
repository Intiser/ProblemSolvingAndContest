#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int x1,x2,y1,y2,X,Y1,Y2,ans;
    while(cin>>x1>>y1>>x2>>y2){
            if(x1==0&&y1==0&&x2==0&&y2==0) break;
            if(x1==x2&&y1==y2) ans=0;
            else if(x1==x2||y1==y2) ans=1;
            else if((x2-x1)==(y2-y1)) ans=1;
            else if((x2-x1)==(y1-y2)) ans=1;
            else ans=2;

            cout<<ans<<endl;
    }
}
