#include<iostream>

using namespace std;

int main()
{
    int i,t,j,k,n,a[10],temp,ans,p;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        cin>>a[j];

        for(j=0;j<n;j++)
        {
            for(k=1;k<(n-j);k++)
            {
                if(a[k]<a[k-1])
                {
                    temp=a[k];
                    a[k]=a[k-1];
                    a[k-1]=temp;
                }

            }

        }

        p=n/2;

        //ans=a[p];

        cout<<"Case "<<i+1<<": "<<a[p]<<endl;

    }

}
