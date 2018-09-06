#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>

using namespace std;

int arr[1000];
int flag[1000];


void clr(int n){
    for(int i=0;i<n;i++) {
        flag[i] = 0;
    }
}





int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int c,s,now,tot,extra,ind,setn = 1 ;
    double avg,error,err;
    while(cin>>c>>s){
        //if(setn>1) printf("\n");
        tot = 0;
        for(int i=0;i<s;i++){
            cin>>arr[i];
            tot = tot + arr[i];
        }
        ind = s;
        avg = (tot*1.0)/c;
        for(int i=s;i<c*2;i++){
            arr[i] = 0;
            ind++;
        }
        sort(arr,arr+ind);
        error = 0;
        //cout<<ind<<endl;
        cout<<"Set #"<<setn<<endl;;
        for(int i=0,j=ind-1;i<c;i++,j--){
            cout<<" "<<i<<":";
            if(arr[i]==0&&arr[j]==0){
                error = error + avg;
            }
            else if(arr[i]==0){
                cout<<" "<<arr[j];
                error = error + abs(avg - arr[j]*1.0);

            }
            else{
                cout<<" "<<arr[i]<<" "<<arr[j];
                error = error + abs(avg - (arr[i]+arr[j])*1.0);
            }

            cout<<endl;
           // cout<<" avg "<<error<<endl;
        }
        printf("IMBALANCE = %.5lf\n",error);
        printf("\n");
        setn++;
    }
}
