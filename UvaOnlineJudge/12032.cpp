#include<iostream>

using namespace std;

int main()
{
    int t,n,d,N[100000],i,j,mx,ln,c;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>N[0];
        mx=N[0];
        ln=mx-1;c=0;
        for(j=1;j<n;j++)
        {
            cin>>N[j];
            d=N[j]-N[j-1];

            if(ln==d&&ln!=0)
                c++;

            if(mx<d)
            {
                mx=d;
                ln=d-1;
                c=0;
            }

            else if(ln<d||(ln==d&&c>1)||ln==0)
            {
                mx++;
                ln++;

            }


        }
        cout<<"Case "<<i+1<<": "<<mx<<endl;
    }


}
