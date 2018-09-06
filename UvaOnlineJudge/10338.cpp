#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>

using namespace std;

int F[25]={1,1,2,6,24};

long long int fact(int n)
{
    if(F[n]!=0)
        return F[n];

    return F[n]=fact(n-1)*n;
}

int main()
{
    long long int t,arr[30],len,ind,val,l;
    string s;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>s;
        len=s.size();
          memset(arr,0,30);
        for(int j=0;j<len;j++){
            ind=s[j]%65;
            arr[ind]++;
        }
        val=fact(len);
        for(int j=0;j<26;j++){ cout<<arr[j]<<endl;
           /* if(arr[j]>1){
                l=fact(arr[j]);
                val=val/l;
            }
            arr[j]=0;*/
        }
        cout<<val<<endl;
    }
}
