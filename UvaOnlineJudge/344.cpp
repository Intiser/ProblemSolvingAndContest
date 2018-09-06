#include<iostream>
#include<stdio.h>

using namespace std;

int f[10];

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        //f[0]=f[0]+(n/5)*7;
       // f[1]=f[1]+(n/10)*5;
        //f[2]=f[2]+(n/50)*75;
        //f[3]=f[3]+(n/50)*12;
        for(int i=1;i<=n;i++){
            if(i%5<=3)
            f[0]=f[0]+i%5;
            else
            f[0]++;

            if(i%10>=4&&i%10<=8) f[1]++;

            if(i%50<40) {
                f[2]=f[2]+((i+1)/10)%5;
            }else if(i%50==49) f[2]+=2;
            else{
                f[2]++;
            }

            if(i%100>=40&&i%100<90) f[3]++;

            if(i%100>=90) f[4]++;

        }
        //cout<<f[0]<<endl; f[0]=0;
        //cout<<f[1]<<endl; f[1]=0;
        //cout<<f[2]<<endl; f[2]=0;
        //cout<<f[3]<<endl; f[3]=0;
        //cout<<f[4]<<endl; f[4]=0;
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,f[0],f[1],f[2],f[3],f[4]);
        f[0]=0; f[1]=0; f[2]=0; f[3]=0; f[4]=0;
    }
}
