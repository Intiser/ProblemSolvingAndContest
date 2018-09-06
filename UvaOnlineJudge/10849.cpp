#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    long long int c,t,n,x1,x2,y1,y2;
    cin>>c;
    while(c--){
        cin>>t;
        cin>>n;
        while(t--){
            cin>>x1>>y1>>x2>>y2;
            if(((x1+y1)%2)!=((x2+y2)%2)){
                printf("no move\n");
            }else if(x1==x2&&y1==y2){
                printf("0\n");
            }
            else if((x2-x1)==(y2-y1)){
                printf("1\n");
            }
            else if((x2-x1)==(y1-y2)){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }
}
