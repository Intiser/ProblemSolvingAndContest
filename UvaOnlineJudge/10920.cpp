#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int n,p,nmbr,cnt,stX,stY,nwX,nwY,tot;
    while(cin>>n>>p){
        if(n==0&&p==0) break;
        cnt=0;
        stX=n/2+1; stY=n/2+1;
        for(int i=1;i<=n;i+=2){
                nmbr=i;
            if((i+2)*(i+2)>=p){

                tot=nmbr*nmbr;
                 cnt++;
                break;
            }

        }
        if((nmbr+2)*(nmbr+2)==p){
            nwX=stX+cnt; nwY=stY+cnt;
        }
        else{
            nmbr++;
            if(nmbr*nmbr<=p){
                if(tot+nmbr<=p){
                    nwY+=1;
                    nwX=nwX-(p-(tot+1));
                }
                else{
                    nwY++;
                    nwX=nwX-(nmbr-1);
                    nwY=nwY-(p-(tot+nmbr+1));
                }
            }
            else{
                tot=nmbr*nmbr;
                nwX-=(nmbr-1);
                nwY-=(nmbr-2);
                nmbr++;
                if(tot+nmbr<=p){
                    nwY-=1;
                    nwX+=(p-(tot+1));
                }
                else{
                    nwY--;
                    nwX+=(nmbr-1);
                    nwY+=(p-(tot+nmbr+1));
                }

            }
        }
        cout<<nwY<<" "<<nwX<<endl;
    }
}
