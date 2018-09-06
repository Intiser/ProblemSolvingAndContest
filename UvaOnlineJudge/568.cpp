#include<iostream>
#include<stdio.h>

using namespace std;

int Arr[10010]={1,1,2,6,24,12,72};

int funct(int n)
{
    int key,total,i,c;

    if(Arr[n]!=0)
    {
        key=Arr[n];
        return Arr[n];
    }
    total=n*funct(n-1);

    c=0;
    for(;c==0;)
    {
        if(total%10==0)
        {
            total=total/10;
        }
        else
            c=total%100000;
           // cout<<c<<endl;

    }

    Arr[n]=c;

    return c;


}


int main()
{

    int n,digit;


    while(cin>>n)
    {
         digit=funct(n);


          printf("%5d -> %d\n",n,digit%10);
         //cout<<digit%10<<endl;
    }

}
