#include<iostream>

using namespace std;

int main()
{
 int t,n,i,j,cnt,l;
 char c;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0,l=0,cnt=0;j<n;j++)
        {
            cin>>c;
            if(c=='W')
            {
                l=0;
            }
            else
                l++;

             if(l==3&&cnt==0)
             {
                 cnt=j+1;

             }

        }

        if(cnt==0)
            cout<<"Case "<<i+1<<": Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<i+1<<": "<<cnt<<endl;


    }


}
