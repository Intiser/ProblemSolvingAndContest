#include<iostream>
#include<stdio.h>

using namespace std;

int arr[550][550];

int main(){
    int w,h,n,x1,x2,y1,y2,tot,smX,bgX,smY,bgY;
    while(cin>>w>>h>>n){
        if(w==0&&h==0&&n==0) break;
        tot=w*h;
        for(int i=0;i<n;i++){
            cin>>x1>>y1>>x2>>y2;
            if(x1>x2){
                smX=x2; bgX=x1;
            }
            else {
                smX=x1; bgX=x2;
            }

            if(y1>y2){
                smY=y2; bgY=y1;
            }
            else{
                smY=y1; bgY=y2;
            }

            for(int k=smY;k<=bgY;k++){
                for(int j=smX;j<=bgX;j++){
                    if(!arr[k][j]){
                        arr[k][j]=1;
                        tot--;
                    }
                }
            }
        }
        //cout<<tot<<endl;
        if(tot==0){
            printf("There is no empty spots.\n");
        }
        else if(tot==1){
            printf("There is one empty spot.\n");
        }
        else{
            printf("There are %d empty spots.\n",tot);
        }
        for(int k=0;k<=500;k++){
                for(int j=0;j<=500;j++){
                    arr[k][j]=0;
                }
            }

    }
}
