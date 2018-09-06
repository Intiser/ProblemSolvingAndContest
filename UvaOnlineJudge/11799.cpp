#include<iostream>

using namespace std;

int main()
{
    int i,j,t,n,c[100],maxm;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>c[j];
            if(j==0)
                maxm=c[j];
            else if(c[j]>maxm)
            maxm=c[j];

        }
        cout<<"Case "<<i+1<<": "<<maxm<<endl;


    }




}
