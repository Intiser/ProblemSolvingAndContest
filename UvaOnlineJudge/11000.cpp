#include<iostream>

using namespace std;

int main()
{
    long long int y,M,F,male,female,i;

    while(cin>>y)
    {
        if(y==-1)
            break;
        else
        {
            male=0;
            female=0;
            for(i=1;i<=y;i++)
            {
                M=female+1;
                F=male-female;
                female=female+F;
                male=male+M;

            }

         cout<<male<<" "<<female+male+1<<endl;

        }

    }



}
