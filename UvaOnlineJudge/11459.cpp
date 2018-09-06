#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int p[1000100];
int pos[105];

int main(){
    int t,a,b,c,x,y,d,flag=0;
    cin>>t;
    while(t--){
        for(int k=0;k<1000100;k++) p[k]=1;
        for(int k=0;k<105;k++) pos[k]=0;
        cin>>a>>b>>c;
        for(int i=0;i<b;i++)
        {
            cin>>x>>y;
            pos[x]=y;
            //pos[y]=x;
        }
        flag=0;
        for(int i=0;i<c;i++){
                cin>>d;
            if(flag==0){
                        if(p[i%a+1]<100)
                        p[i%a+1]+=d;
                     if(p[i%a+1]>100) p[i%a+1]=100;


                    if(pos[p[i%a+1]])
                        p[i%a+1]=pos[p[i%a+1]];


                    if(p[i%a+1]==100)  flag=1;

            }
        }
        for(int i=1;i<=a;i++)
        {
            printf("Position of player %d is %d.\n",i,p[i]);
        }
    }
}
