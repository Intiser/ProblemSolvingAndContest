#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int i=1,j,s=1,f,c=0;
  //  freopen("txt.txt","w",stdout);
cout<<s<<" "<<i<<endl;

    for(i=2,s=1;s!=1500;i++)
    {
        c=0;
      // if(i%2==0||i%3==0||i%5==0)
      for(j=0,f=i;(f>1&&f!=i)||j==0;j++)
      {
           if(f%2==0)
                f=f/2;
           else if(f%3==0)
                f=f/3;
           else if(f%5==0)
                f=f/5;
           else
           {
               c++;
           }

      }
          if(c==0)
          {s++;
          }
            cout<<s<<" "<<i<<endl;

    }

    cout<<"The 1500'th ugly number is "<<i-1<<".";

}
