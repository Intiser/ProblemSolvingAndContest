#include<iostream>

using namespace std;

int main()
{
    int t,e,f,cr,i,j,dv,c,n;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>e>>f>>c;

        dv=1;
        j=e+f;
        n=0;
        for(;dv>0;)
        {
            dv=j/c;
            cr=j%c;
            n=n+dv;

            j=dv+cr;
        }

        cout<<n<<endl;

    }

}
