#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,i,j,k,n,cnt,st,en,len;
    string s;

    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        cin>>s;

       len=s.size();

        for(i=0,cnt=0;i<len;)
        {
            if(s[i]=='.')
            {
                i=i+3;
                cnt++;
            }
            else
                i++;

        }

        cout<<"Case "<<k+1<<": "<<cnt<<endl;
    }
}
