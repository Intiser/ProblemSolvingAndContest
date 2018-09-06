#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int a,t,i,j,s_t,n_t,ans;
    string s;

    cin>>t;

    for(i=0;i<t;i++)
    {
      cin>>s;

      s_t=(s[0]-'A')*26*26 + (s[1]-'A')*26 + (s[2]-'A');
      n_t= (s[4]-'0')*1000+ (s[5]-'0')*100 + (s[6]-'0')*10 +(s[7]-'0')*1;
      ans=abs(s_t - n_t) ;

      //cout<<ans<<endl;
      //cout<<s_t<<" "<<n_t<<endl;

      //cout<<s<<endl;


       if(ans<=100)
        cout<<"nice"<<endl;
       else
        cout<<"not nice"<<endl;


    }

}
