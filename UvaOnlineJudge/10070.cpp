#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s;
    long long int four,hun,fhun,fifteen,fivfifty,fl=0,nw=0;
    while(cin>>s){
        long long int len=s.size();
        four=0; hun=0; fhun=0; fifteen=0; fivfifty=0; fl=0;
        for(long long int i=0;i<len;i++){
            four=((four*10)+(s[i]-'0'))%4;
            hun=((hun*10)+(s[i]-'0'))%100;
            fhun=((fhun*10)+(s[i]-'0'))%400;
            fifteen=((fifteen*10)+(s[i]-'0'))%15;
            fivfifty=((fivfifty*10)+(s[i]-'0'))%55;
        }
        if(nw)
        printf("\n");
         nw++;
        if((four==0&&hun)||fhun==0){
            printf("This is leap year.\n");
            fl=1;
        }
        if(fifteen==0){
            printf("This is huluculu festival year.\n");
            fl=1;
        }
        if(fivfifty==0){
            printf("This is bulukulu festival year.\n");
            fl=1;
        }
        if(fl==0){
            printf("This is an ordinary year.\n");
        }


    }
}
