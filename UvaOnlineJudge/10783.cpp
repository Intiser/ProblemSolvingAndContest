#include<iostream>

using namespace std;

int main()
{
    int t,i,j,s,e,n,d=2,a,total;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>s;
        cin>>e;
        if(s%2==1)
            a=s;
        else
            a=s+1;
        if(e%2==1)
            ;
        else
            e=e-1;
        n=((e-s)/2)+1;

        d=(n-1)*2;
        total=(n*(2*a+d))/2;







        cout<<"Case "<<i+1<<": "<<total<<endl;
    }
}
