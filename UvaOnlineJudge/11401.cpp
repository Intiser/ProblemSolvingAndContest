#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

#define Mx 1000011

long long int Arr[Mx]={0,0,0,0,1,3};
int V[Mx];
long long int ar[Mx];
long long int arr[Mx];

long long int funct(int n){
    long long int term,x,y,ret=0;
    if(n<6)
        return Arr[n];

    if(Arr[n]!=0)
        return Arr[n];

    x=n-2;
    term=ceil(((x*(x-1))/2)/2.0)+1;
    ret=ret+funct(n-1);
    ret=ret+term;

    return Arr[n]=ret;


}

int main()
{
    long long term,tm;
    arr[5]=2; arr[4]=1; tm=2; ar[4]=1; ar[5]=1;
    for(int i=6;i<=1000000;i++){
        if(i%2==0){
            term=((2+(tm-1)*2)*tm)/2;
            tm++;
            arr[i]=term;
        }
        else{
           arr[i]=term+(tm-1);

        }
        Arr[i]=Arr[i-1]+arr[i];
    }

    int n;
    long long int ans;

    while(cin>>n){
        if(n<3)
         break;

        //ans=funct(n);
        cout<<Arr[n]<<endl;
    }

}
