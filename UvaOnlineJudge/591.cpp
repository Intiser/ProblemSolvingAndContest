#include<iostream>

using namespace std;

int main()
{
    int n,h[50],avg,total,cnt,i,j=0;

    while(cin>>n)
    {
        j++;
        if(n!=0)
        {   total=0;
            for(i=0;i<n;i++)
            {
                cin>>h[i];
                total=total+h[i];
            }
            avg=total/n;

            for(i=0,cnt=0;i<n;i++)
            {
                if(h[i]>avg)
                {
                    cnt=cnt+(h[i]-avg);
                }
            }
            cout<<"Set #"<<j<<endl;
            cout<<"The minimum number of moves is "<<cnt<<".\n"<<endl;

        }
        else
            break;
    }



}
