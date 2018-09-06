#include<iostream>
#include<stdio.h>

using namespace std;

int arr[150];
int M=1,A=3,R=2,G=1,I=1,T=1;
int C[150];

int main(){
        C['M'] = 1;
        C['A'] = 3;
        C['R'] = 2;
        C['G'] = 1;
        C['I'] = 1;
        C['T'] = 1;
      string s;
      char an[]={'M','A','R','G','I','T'};
      int t,minm;
      cin>>t;
      cin.ignore();
      while(t--){
        getline(cin,s);
        minm = 1000000;
        int len = s.size();
        for(int i =0;i<len;i++){
            if(s[i]=='M'||s[i]=='A'||s[i]=='R'||s[i]=='G'||s[i]=='I'||s[i]=='T'){
                int c = s[i];
                arr[c]++;
            }
        }
        for(int i=0;i<6;i++){
            int div = arr[an[i]]/C[an[i]];
            if(div<minm){
                minm = div;
            }
            //cout<<"# "<<div;
            arr[an[i]] = 0;
        }
        //cout<<endl;
        cout<<minm<<endl;
        for(int i=0;i<150;i++) arr[i] = 0;
      }
}
