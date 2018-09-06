#include<iostream>
#include<string.h>


using namespace std;

int main()
{
   char c[100];
   int k,t,i,total=0;

   cin>>t;
   for(i=0;i<t;i++)
   {
    cin>>c;
    if(strcmp(c,"donate")==0)
    {
        cin>>k;
        total=total+k;
    }
    else if(strcmp(c,"report")==0)
        cout<<total<<endl;

   }

}
