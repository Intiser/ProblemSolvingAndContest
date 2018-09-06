#include<iostream>

using namespace std;

int main()
{
   long long int n,i,f,f1,F;

    while(cin>>n)
    {if(n==0)
    {
       break;
    }
    else
   {
       F=1;
        for(i=1,f=1,f1=1;i<n;i++)
        {
            F=f+f1;
            f=f1;
            f1=F;
        }

        cout<<F<<endl;
    }
    }
}
