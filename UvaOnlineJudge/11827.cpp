#include<iostream>
#include<sstream>
#include<string>
#include<stdio.h>
#include<algorithm>

using namespace std;

int arr[200];

 int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int t;
    string s;
    cin>>t;
    cin.ignore();
    //getline(cin,s);
    while(t--){
        getline(cin,s);
        int len = s.size();
        int elm = 0 ,fl = 0 ,tot = 0 , in = 0;
        for(int i=0;i<len;i++){
            if(s[i]>='0'&&s[i]<='9'){
                tot=tot*10+s[i]-'0';
                fl=1; in=1;
            }
            else if(fl==1){
                arr[elm]=tot;
                elm++; tot=0;
                in = 0;
            }
        }
        if(in==1){
                arr[elm]=tot;
                elm++; tot=0;
            }
        //cout<<elm<<endl;
        //for(int i=0;i<=elm;i++) cout<<arr[i]<<endl;
        //sort(arr,arr+elm);
        int maxm=0,trm;
        for(int i=0;i<elm-1;i++){
            for(int j=i+1;j<elm;j++){
                if(arr[i]>arr[j]){
                    trm = gcd(arr[i],arr[j]);
                }
                else{
                    trm = gcd(arr[j],arr[i]);
                }
                if(trm>maxm){
                    maxm=trm;
                }
                //cout<<" trm "<< trm<<endl;
            }
        }
        cout<<maxm<<endl;
    }
    /*int a,b;
    while(cin>>a>>b){
        cout<<gcd(a,b)<<endl;
    }*/
}
