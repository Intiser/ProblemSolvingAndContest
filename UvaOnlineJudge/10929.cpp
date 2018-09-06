#include<iostream>

using namespace std;

int main()
{
    int n,i,siz,j,k,s1,s2,tot,val;
     string s;

    while(cin>>s)
    {

     siz=s.size();

    if(siz==1&&s[0]=='0')
         break;


    for(i=0,s1=0;i<siz;i=i+2)
    {
        if(s[i]>='0'&&s[i]<='9')
       val= s[i]-'0';
       else
        val=0;

       s1=s1+val;

    }

    for(i=1,s2=0;i<siz;i=i+2)
    {
        if(s[i]>='0'&&s[i]<='9')
       val= s[i]-'0';
       else
        val=0;

       s2=s2+val;

    }

    tot=s1-s2;


    if(tot%11==0)
            cout<<s<< " is a multiple of 11." << endl;
    else
         cout<<s<< " is not a multiple of 11." << endl;




    }






}
