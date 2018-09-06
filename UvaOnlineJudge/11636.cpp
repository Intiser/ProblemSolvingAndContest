#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i=0,j,cnt,k=0;
    double n,lg;

    while(cin>>n)
    {
        if(n<0)
            break;
         cnt=0;
        for(i=1;n>i;)
        {
            i=i*2;
            cnt++;
        }


          k++;
        cout<<"Case "<<k<<": "<<cnt<<endl;

    }


}
