#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int T,i,m,tax;
    double    m1,m2,m3,m4,t1,t2,t3,t4;

    cin>>T;

    for(i=0;i<T;i++)
    {
        cin>>m;
        if(m>180000)
        {
              m1=m-180000;

            if(m1<=300000)
            {
                t1=ceil((m1*10)/100);

            }
            else
                t1=30000;


            m2=m1-300000;

            if(m2>0&&m2<=400000)
            {
                t2=ceil((m2*15)/100);

            }
            else if(m2>400000)
            {
                t2=60000;
            }
            else
                t2=0;

            m3=m2-400000;

            if(m3>0&&m3<=300000)
            {
                t3=ceil((m3*20)/100);
            }
            else if(m3>300000)
            {
                t3=60000;
            }
            else
                t3=0;


            m4=m3-300000;

            if(m4>0)
            {
                t4=ceil((m4*25)/100);
            }
            else
                t4=0;

            tax=t1+t2+t3+t4;

            if(tax<2000)
            {
                tax=2000;
                cout<<"Case "<<i+1<<": "<<tax<<endl;
            }
            else
               cout<<"Case "<<i+1<<": "<<tax<<endl;


       //cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<endl;

        }
        else{
                tax=0;
            cout<<"Case "<<i+1<<": "<<tax<<endl;
        }
    }

}
