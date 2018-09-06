#include<iostream>

using namespace std;

int main()
{
    int i,t,a,b,c;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a>=(b+c)||b>=(c+a)||c>=(a+b))
            cout<<"Wrong!!"<<endl;
        else
            cout<<"OK"<<endl;

    }



}
