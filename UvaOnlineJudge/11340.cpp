#include<iostream>
#include<stdio.h>

using namespace std;

double arr[150];

int main(){
    long long int t,n,m,a,len;

    double net,tot;
    char c;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        while(n--){
            cin>>c>>a;
            cin.ignore();
            arr[c]=a;
        }
        //for(int i=0;i<130;i++) cout<<i<<" "<<arr[i]<<endl;
        cin>>m;
        cin.ignore();
        tot=0;
        while(m--){


            for(int i=0;c=getchar();){
                if(c=='\n') break;
              tot+=arr[c];
            }
        }
        net=(tot*1.0)/100;
        printf("%.2lf$\n",net);
        for(int i=0;i<130;i++) arr[i]=0;
    }
}
