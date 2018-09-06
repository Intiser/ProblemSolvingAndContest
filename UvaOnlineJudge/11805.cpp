#include<iostream>

using namespace std;

int main()
{
    int t,i,n,k,p,ans;

    cin>>t;
    for(i=0;i<t;i++)
    {
     cin>>n>>k>>p;

        ans=(k+p)%n;

        if(ans==0)
            cout<<"Case "<<i+1<<": "<<n<<endl;
        else
            cout<<"Case "<<i+1<<": "<<ans<<endl;

    }

}
