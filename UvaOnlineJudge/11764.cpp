#include<iostream>

using namespace std;

int main()
{
    int t,i,j,w,h[50],l,s;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>w;
        cin>>h[0];
        for(j=1,l=0,s=0;j<w;j++)
        {
            cin>>h[j];
            if(h[j]>h[j-1])
               l++;
            else if(h[j]<h[j-1])
                s++;

        }

        cout<<"Case "<<i+1<<": "<<l<<" "<<s<<endl;



    }


}
