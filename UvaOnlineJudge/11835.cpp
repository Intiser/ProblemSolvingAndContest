#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int arr[150][150];
int fre[150];
lli tot[150];

void init(int p){
    for(int i=0;i<=p;i++){
        fre[i] = 0;
        tot[i] = 0;
    }
}

lli counter(int p,int q){
    lli mx = 0;
    for(int i=0;i<q;i++){
        for(int j=1;j<=p;j++){
            tot[j] = tot[j] + fre[arr[i][j]];
            if(tot[j]>mx) mx = tot[j] ;
        }
    }
    return mx;
}
void print(int n){
    for(int i=1;i<=n;i++) cout<<fre[i]<<endl;
}

int main(){
    int q,p;
    int n,m;
    while(cin>>q>>p){
            if(q==0&&p==0) break;
            for(int i=0;i<q;i++){
                for(int j=1;j<=p;j++){
                    scanf("%d",&arr[i][j]);
                }
            }
            cin>>n;
            for(int i=0;i<n;i++){
                init(p);
                cin>>m;
                for(int j=1;j<=m;j++){
                    cin>>fre[j];
                    //cout<<fre[i]<<endl;
                }

                lli mx = counter(p,q);
                int fl = 0;
                //print(p);
                for(int i=1;i<=p;i++){
                    if(tot[i]==mx){
                        if(fl==0){
                            fl=1;
                            cout<<i;
                        }
                        else
                            cout<<" "<<i;
                    }
                }
                cout<<endl;
            }
    }

}
