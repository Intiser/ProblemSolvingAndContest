#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>

using namespace std;

int main(){

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,ah,am,bh,bm,sth=10,stm=0,eh=18,em=0,maxm,strth,strtm,enh,enm,tmh,tmm,totm,ph,pm,Day=1;
    string str;
    while(cin>>n){

        maxm=0;
        for(int i=0;i<n;i++){
            scanf("%d:%d %d:%d",&ah,&am,&bh,&bm);
            cin.ignore();
            getline(cin,str);


            if(i==0){
                tmh=ah-sth; tmm=am-stm; totm=tmh*60+tmm;
                if(maxm<totm){
                    maxm=totm;
                    strth=sth; strtm=stm;
                    enh=ah; enm=am;
                }
            }
            if(i==n-1){
                tmh=eh-bh; tmm=bm-em;  totm=tmh*60-tmm;
                if(maxm<totm){
                    maxm=totm;
                    strth=bh; strtm=bm;
                    enh=eh; enm=em;
                }
            }
            if(i>0&&i<=n-1){
                tmh=ah-ph; tmm=am-pm;  totm=tmh*60+tmm;
                if(maxm<totm){
                    maxm=totm;
                    strth=ph; strtm=pm;
                    enh=ah; enm=am;
                }
            }
            ph=bh;
            pm=bm;

        }
        if(maxm>=60){
            if(strtm/10>=1)
                printf("Day #%d: the longest nap starts at %d:%d and will last for %d hours and %d minutes.\n",Day,strth,strtm,(enh-strth),(maxm-(enh-strth)*60));
            else
                printf("Day #%d: the longest nap starts at %d:0%d and will last for %d hours and %d minutes.\n",Day,strth,strtm,(enh-strth),(maxm-(enh-strth)*60));
        }
        else {
            if(strtm/10>=1)
                printf("Day #%d: the longest nap starts at %d:%d and will last for %d minutes.\n",Day,strth,strtm,maxm);
            else
                printf("Day #%d: the longest nap starts at %d:0%d and will last for %d minutes.\n",Day,strth,strtm,maxm);
        }
        Day++;

        //printf("%d:%d %d:%d ",ah,am,bh,bm);
        //cout<<str<<endl;
    }
}
