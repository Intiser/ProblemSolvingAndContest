#include<iostream>

using namespace std;

int main()
{

    int t,m,d,tot,i,j,p,q,r,ans;

    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>m>>d;
      if(m<3)
      {
          p=m/2;
          //q=m%2;
          tot=p*31+d;
          ans=tot%7;


      }
      else if(m<8)
      {
          p=m/2;
          r=m%2;
          if(p>=2)
            q=(p+r)-2;
            else
            q=0;
          tot=p*31+28+d+q*30;
          ans=tot%7;


      }
      else
      {
          p=m/2;
          r=m%2;
          q=(p-2);
          tot=(p+r)*31+q*30+28+d;
          ans=tot%7;

      }



      if(ans==1)
      {
          cout<<"Saturday"<<endl;
      }
      else if(ans==2)
      {
          cout<<"Sunday"<<endl;
      }
      else if(ans==3)
      {
          cout<<"Monday"<<endl;
      }
      else if(ans==4)
      {
          cout<<"Tuesday"<<endl;
      }
      else if(ans==5)
      {
          cout<<"Wednesday"<<endl;
      }
      else if(ans==6)
      {
          cout<<"Thursday"<<endl;
      }
      else if(ans==0)
      {
          cout<<"Friday"<<endl;
      }
    }

}
