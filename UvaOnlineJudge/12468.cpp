#include<iostream>

using namespace std;

int main()
{
    int a,b,neg,pos;

    while(cin>>a>>b)
    {if(a!=-1&&b!=-1)
       {

        if(b>a)
            pos=b-a;
         else
         pos=a-b;
         if(b>a)
        neg=(99-b)+a+1;
         else
            neg=(99-a)+b+1;
       if(pos<neg)
        cout<<pos<<endl;
       else
        cout<<neg<<endl;

       }
       else
        break;

    }

}
