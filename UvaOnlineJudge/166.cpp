#include<iostream>
#include<stdio.h>

using namespace std;

int arrc[]={5,10,20,50,100,200};
int amm[10];

int main(){
    double money;
    int cents;
    while(cin>>amm[0]>>amm[1]>>amm[2]>>amm[3]>>amm[4]>>amm[5]){
        if(amm[0]==0&&amm[1]==0&&amm[2]==0&&amm[3]==0&&amm[4]==0&&amm[5]==0) break;
        cin>>money;
        cents = (int)(100*money);
        int cnt = 0;
        for(int i=5;i>=0;i--){
            if(cents/arrc[i]){
                int cns = cents/arrc[i];
                int tmp;
                if(cns<=amm[i]){
                    tmp = cns;
                }
                else
                    tmp = amm[i];
                cents = cents - tmp*arrc[i];
                cnt = cnt + tmp;
            }
        }
        cout<<cnt<<endl;
    }
}
