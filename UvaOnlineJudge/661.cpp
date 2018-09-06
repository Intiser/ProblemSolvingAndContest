#include<iostream>

using namespace std;

int main()
{
        int a[20],b[20],n,m,c,i,j=0,k,crnt,t,blw,mx;


         while(cin>>n>>m>>c)
      {
          if(n==0&&m==0&&c==0)
            break;

             for(i=0;i<20;i++)
                b[i]=0;

                for(i=0;i<n;i++)
                 cin>>a[i];

              for(k=0,crnt=0,blw=0,mx=0;k<m;k++)
               {
                   cin>>t;

                   if(b[t-1]==0)
                   {
                       crnt=crnt+a[t-1];
                       b[t-1]=a[t-1];
                   }
                   else
                   {
                       crnt=crnt-a[t-1];
                       b[t-1]=0;
                   }

                   if(crnt>c)
                   {
                       blw=1;

                   }

                   if(crnt>mx)
                    mx=crnt;

                    //cout<<"mx="<<mx<<endl;

               }
               j++;

               cout<<"Sequence "<<j<<endl;


               if(blw==0)
                {
                     cout<<"Fuse was not blown."<<endl;  // cout<<"Yes"<<" "<<mx<<endl;
                     cout<<"Maximal power consumption was "<<mx<<" amperes.\n"<<endl;
                }
               else
                 cout<<"Fuse was blown.\n"<<endl;             //cout<<"No"<<endl;



      }


}
