#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    int x[10],y[10];
    int n,area,h,l,s,a,b,c,w,fl;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i];
        if(n==1||(n==2&&(x[0]==x[1]||y[0]==y[1]))){
            cout<<"-1"<<endl;
        }
        else if(n==2){
            h=abs(y[0]-y[1]);
            l=abs(x[0]-x[1]);
            area=h*l;
            cout<<area<<endl;
        }
        else if(n==3){
           // a=(int)sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
           // b=(int)sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
           // c=(int)sqrt((x[2]-x[0])*(x[2]-x[0])+(y[2]-y[0])*(y[2]-y[0]));
           w=-1; h=-1; fl=0;
           for(int j=0;j<4;j++)
           for(int i=0;i<4;i++){
                if(x[i]==x[j]&&i!=j){
                    w=abs(y[i]-y[j]);
                }
                if(y[i]==y[j]&&i!=j){
                    h=abs(x[i]-x[j]);
                }
           }
           if(w==-1||h==-1) {
            cout<<"-1"<<endl;
           }
           else {
           area=w*h;
           cout<<area<<endl;
           }
        }
        else{
           w=-1; h=-1;
          for(int j=0;j<4;j++)
           for(int i=0;i<4;i++){
                if(x[i]==x[j]&&i!=j){
                    w=abs(y[i]-y[j]);
                }
                if(y[i]==y[j]&&i!=j){
                    h=abs(x[i]-x[j]);
                }
           }
            if(w==-1||h==-1) {
            cout<<"-1"<<endl;
           }
           else {
           area=w*h;
           cout<<area<<endl;
           }
        }

    }
}
