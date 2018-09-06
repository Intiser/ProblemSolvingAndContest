#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    int i,j,k,sum,c,cnt,len1,len2;

    while(cin>>s1>>s2)
    {
        len1= s1.size(); len2= s2.size();

        if(len1==1&&s1[0]=='0'&&len2==1&&s2[0]=='0')
            break;


        cnt=0;
        c=0;
        for(i=len1-1,j=len2-1;i>=0&&j>=0;i--,j--)
        {
            c=((s1[i]%48)+(s2[j]%48)+c)/10;
            if(c>0)
            cnt++;
        }
        while(i>=0)
        {
             c=((s1[i]%48)+c)/10;
             if(c>0)
            cnt++;
         i--;
        }
        while(j>=0)
        {
             c=((s2[j]%48)+c)/10;
             if(c>0)
            cnt++;

          j--;
        }

                if(cnt==0)
          cout<<"No carry operation."<<endl;
        else if(cnt==1)
         cout<<cnt<<" carry operation."<<endl;
         else
        cout<<cnt<<" carry operations."<<endl;

        s1.clear(); s2.clear();

    }

}
