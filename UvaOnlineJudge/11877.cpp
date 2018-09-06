#include<iostream>

using namespace std;

int main()
{
    int n,i,cnt,dv,c,t;

    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            dv=1;
            t=n+1;
            cnt=0;
            for(;dv>0;)
            {

                dv=t/3;



                c=t%3;
                cnt=cnt+dv;
                t=c+dv;
            }
            cout<<cnt<<endl;

        }
    }
}
