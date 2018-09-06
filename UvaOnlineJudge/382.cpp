#include<iostream>

using namespace std;

int main()
{
    int i,j=0,k,n,dvd,t;
    while(cin>>n)
    {
        j++;
        if(n==0)
            break;
        else
        {
            for(i=1,dvd=0;i<n;i++)
            {
             if(n%i==0)
             {
                 dvd=dvd+i;
             }


            }
            if(j==1)
                cout<<"PERFECTION OUTPUT"<<endl;

            for(k=0,t=10000;n/t==0;k++)
            {
                t=t/10;
                cout<<" ";

            }

            if(dvd==n)
                cout<<n<<"  PERFECT"<<endl;
            else if(dvd<n)
                cout<<n<<"  DEFICIENT"<<endl;
            else
                cout<<n<<"  ABUNDANT"<<endl;


        }
    }
    cout<<"END OF OUTPUT"<<endl;



}
