#include<iostream>

using namespace std;

int main()
{

    int t,i,n,r[500],j,k,d,d_t,mint;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;               //input taking
         mint=0;
         for(j=0;j<n;j++)
            cin>>r[j];

        for(j=0;j<n;j++)
        {
            d_t=0;       //total distance variable d_t
            for(k=0;k<n;k++) //loop for calculating total distance d_t for every road
            {
                if(r[j]<r[k])
                    d=r[k]-r[j];  // d distance between initial r[j] ans r[k]
                else
                    d=r[j]-r[k];

                d_t=d_t+d; // adding distance in total distance
            }

            if(j==0)       // for first loop
                mint=d_t;
            else if(d_t<mint)  // which is minimum ??
                mint=d_t;


        }
        cout<<mint<<endl;;     //output


    }



}

