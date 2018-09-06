#include<iostream>

using namespace std;

int main()
{
    int n,i,ans;

    while(cin>>n)
    {
        if(n==0)
            break;
        else{
            ans=0;
            for(i=1;i<=n;i++)
            {
                ans=ans+i*i;
            }
            cout<<ans<<endl;

        }
    }






}
