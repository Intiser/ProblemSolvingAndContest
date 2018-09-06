#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int n,hr=0,mn=0,sc=0,tot_sec,pr=0,spd,speed=0;
    double dis=0;
    char buffer[1000];
    while(cin.getline(buffer,sizeof(buffer))){
        int n=sscanf(buffer, "%d:%d:%d %d",&hr,&mn,&sc,&spd);
        tot_sec=((hr*60)+mn)*60+sc;
        tot_sec=tot_sec-pr;
        pr=((hr*60)+mn)*60+sc;
        dis=dis+((tot_sec*1.0)/3600.0)*speed;
        if(n==3){

            printf("%02d:%02d:%02d %.2lf km\n",hr,mn,sc,dis);
        }
        else if(n==4){
            speed=spd;
        }
    }
}
