#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,fl,cnt,fnsh;
    string s[110],arr[20];
        arr[0]="Happy";
        arr[1]="birthday";
        arr[2]="to";
        arr[3]="you";
        arr[4]="Happy";
        arr[5]="birthday";
        arr[6]="to";
        arr[7]="you";
        arr[8]="Happy";
        arr[9]="birthday";
        arr[10]="to";
        arr[11]="Rujia";
        arr[12]="Happy";
        arr[13]="birthday";
        arr[14]="to";
        arr[15]="you";
    //for(int i=0;i<16;i++) cout<<arr[i]<<endl;
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];
    cnt=0; fl=0; fnsh=0;
    for(int i=0;fnsh==0||fl==0;i++){
        cout<<s[i%n]<<": "<<arr[i%16]<<endl;
        fnsh=0; cnt++;
        if((i+1)%16==0) fnsh=1;
        if(cnt==n) fl=1;
    }
}
