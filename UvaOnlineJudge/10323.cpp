#include<iostream>

using namespace std;

int main()
{
    long long int i,n,tot;

    while(cin>>n)
    {
      if(n>13)
      {
        cout<<"Overflow!"<<endl;
      }
      else if(n>-1&&n<14){
       for(i=1,tot=1;i<=n;i++)
        {
            tot=tot*i;
        }
        if(tot>=10000)
        cout<<tot<<endl;
        else
           cout<<"Underflow!"<<endl;

      }
      else if(n<0)
      {
             if(n%2==-1)
               cout<<"Overflow!"<<endl;
             else
                cout<<"Underflow!"<<endl;

      }

    }

}
