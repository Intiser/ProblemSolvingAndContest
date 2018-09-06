#include<iostream>
#include<stdio.h>

using namespace std;

int arr[20];

int main(){
    string s[20],t;
    int n,a,amount,div,frnd;
    while(cin>>n){
            //cin.ignore();
        for(int i=0;i<n;i++) cin>>s[i];
        //cout<<"  n "<<endl;
        for(int i=0;i<n;i++){
            cin>>t;
            cin>>amount;
            cin>>frnd;
            //cin.ignore();
            //cout<<"  n "<<endl;
            if(frnd)
            div = amount / frnd ;
            else
                div =0;
            for(int j=0;j<n;j++){
                if(t==s[j]){
                    arr[j]= arr[j] - div * frnd;

                    for(int k=0 ;k<frnd;k++){
                        cin>>t;
                        for(int l =0 ; l<n;l++){
                            if(s[l]==t){
                                arr[l] = arr[l] + div;
                            }
                        }
                    }
                }
            }


        }
        for(int i=0;i<n;i++){
            cout<<s[i]<<" "<<arr[i]<<endl;
            arr[i] = 0;
        }
        cout<<endl;
        //cin.ignore();
    }
}
