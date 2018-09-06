#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int st[150];
int flag[2500];


int main(){
    int in=0;
    flag[0]=1; flag[1]=1;
    for(int i=4;i<2500;i+=2) flag[i]++;
    for(int i=3;i<2500;i+=2){
        if(!flag[i]){
            for(int j=i+i;j<2500;j+=i){
                flag[j]++;
            }
        }
    }
    int t,len,c;
    string str;
    cin>>t;
    cin.ignore();
    for(int k=1;k<=t;k++){

        for(int i=0;i<130;i++) st[i]=0;
        getline(cin,str);

        len=str.size();
        for(int i=0;i<len;i++){
            if((str[i]>='0'&&str[i]<='9')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            {c=str[i];
            st[c]++;}
        }
        int fl=0;
        printf("Case %d: ",k);
        for(int i=0;i<130;i++){
            if(!flag[st[i]]){
                printf("%c",i);
                fl=1;
                }
        }
        if(fl==0) printf("empty");

        printf("\n");
       // printf("%d\n",st[65]);

        str.clear();
    }

}
