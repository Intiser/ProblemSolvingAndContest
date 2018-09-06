#include<iostream>

using namespace std;

int main()
{
    int n,c,total,i,l;

    while(cin>>n)
    {
        total=0;
        c=n+1;
        for(i=0,l=0;n>=1;i++)
        {

            total=total+n;
            n=(c)/3;
            l=c%3;
            c=n+l;

        }
       cout<<total<<endl;
    }





}
