#include<iostream>

using namespace std;

int main()
{
    unsigned long long int N,M,i,j,c,l,m,p,q,s,t,cnt;
    while(cin>>N>>M)
    {
        if(N==0&&M==0)
            break;

        p=N;
        q=M;
        cnt=0;
        s=1; t=1;
        for(i=0,l=10,m=10;s>=1&&t>=1;i++)
        {
            if(i==0)
            {
                c=(p%10+q%10)/10;
                s=p/l; t=q/l;
                 l=l*10;
            }
            else
            {
                c=(((p%l)/m)+((q%l)/m)+c)/10;
                s=p/l; t=q/l;
                l=l*10; m=m*10;

            }

            if(c>0)
                cnt++;


        }
        if(c>0)
        {
            while(s>=1)
            {
                c=(((p%l)/m)+c)/10;
                s=p/l;
                l=l*10; m=m*10;

                if(c>0)
                cnt++;
            }
            while(t>=1)
            {
                c=(((q%l)/m)+c)/10;
                s=q/l;
                l=l*10; m=m*10;
                if(c>0)
                cnt++;
            }

        }

        if(cnt==0)
          cout<<"No carry operation."<<endl;
        else if(cnt==1)
         cout<<cnt<<" carry operation."<<endl;
         else
        cout<<cnt<<" carry operations."<<endl;


        //cout<<N<<M;
    }

}
