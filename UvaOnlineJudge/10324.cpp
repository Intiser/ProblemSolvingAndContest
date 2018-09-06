#include<iostream>

using namespace std;

int main()
{
   int i,j,t,m,n,k,l,p=1;
   char c[1000000];

   while(cin>>c)
   {
      cin>>t;

    cout<<"Case "<<p<<":"<<endl;

      for(k=0;k<t;k++)
      {
       cin>>m>>n;


       if(m<n)
       {
        i=m;
        j=n;
       }
       else
       {
           i=n;
           j=m;
       }

       for(l=0;i<j;i++)
       {
           if(c[i+1]!=c[i])
            l=1;
       }


       if(l==0)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;


      }
     p++;
   }

}
