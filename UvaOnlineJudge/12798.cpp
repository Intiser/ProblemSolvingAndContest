#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,l,a[100],t;

    while(cin>>n>>m)
    {
        t=0;
        for(i=0;i<n;i++)
        {
            l=0;
            for(j=0;j<m;j++)
            {
                cin>>a[j];
                if(a[j]>0)
                    l++;
            }
            if(l==m)
                t++;

        }
        cout<<t<<endl;
    }
}
