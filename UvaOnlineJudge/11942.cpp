#include<iostream>

using namespace std;

int main()
{
    int i,j,t,n[10],l,s;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n[0];
        for(j=1,l=0,s=0;j<10;j++)
        {
            cin>>n[j];
            if(n[j]<=n[j-1])
                s++;
            else if(n[j]>=n[j-1])
                l++;


        }
        if(i==0)
            cout<<"Lumberjacks:"<<endl;


        if(s==9||l==9)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;



    }



}
