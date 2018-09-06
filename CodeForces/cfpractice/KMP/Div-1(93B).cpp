#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string.h>

using namespace std;

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define sccl(x,y) scanf("%lld %lld",&x,&y)
#define sccc(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define scccl(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define prc(c) printf("Case %d: ",c)
#define prn(c) printf("Case %d:\n",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)
#define lli long long int
#define FORL(x,y,z) for(int x = y ; x<z ; x++)
#define FORE(x,y,z) for(int x = y ; x<=z; x++)
#define ROFE(x,y,z) for(int x = y ; x>=z; x--)

int lps[1000100];

void calcul(char c[]){
    int len = 0;
    int i = 1;
    lps[0] = 0;
    int siz = strlen(c);
    while(i<siz){
        if(c[i]==c[len]){
            len++;
            lps[i] = len;
            i++;

        }
        else {
            if(len!=0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main(){
    char c[1000100];
    char ans[1000100];
    scanf("%s",&c);
    calcul(c);
    int n = strlen(c);
    if(lps[n-1]==0){
        cout<<"Just a legend"<<endl;
    }
    else {
        //cout<<lps[n-1]<<endl;
        int fl = 0;
        FORL(i,0,n-1){
            if(lps[i]==lps[n-1]) fl = 1;
        }
        if(fl==1){

            FORL(i,0,lps[n-1]){
                ans[i] = c[i];
            }
            ans[lps[n-1]] = '\0';

            printf("%s\n",ans);
        }
        else {
            if(lps[lps[n-1]-1]==0){
                cout<<"Just a legend"<<endl;
            }
            else{
                int t = lps[lps[n-1]-1];
                //cout<<t<<endl;
                for(int i=0;i<t;i++){
                    ans[i] = c[i];
                }
                ans[t+1] = '\0';
                printf("%s\n",ans);
            }

        }
    }
}


