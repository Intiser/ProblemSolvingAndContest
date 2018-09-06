#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int n,low=-1,high=11,flag=0;
    string  s;

    while(cin>>n)
    {
        if(n==0)
            break;

        cin.ignore();
        getline(cin,s);


          if(s.compare("too high")==0)
          {
              if(high>n)
                high=n;

                if(n<low)
                {
                    flag=1;
                }

          }
          else if(s.compare("too low")==0)
          {
              if(low<n)
                low=n;

                if(n>high)
                {
                    flag=1;
                }

          }
          else if(s.compare("right on")==0)
          {
               if(n<=low||n>=high)
               {
                   flag=1;
               }

               if(flag==1)
               {
                   cout<<"Stan is dishonest"<<endl;
                   flag=0;
                   high=11;
                   low=-1;
               }
               else
               {
                   cout<<"Stan may be honest"<<endl;
                   flag=0;
                   high=11;
                   low=-1;
               }



          }


    }

}
