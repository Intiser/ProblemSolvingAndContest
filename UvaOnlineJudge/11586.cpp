#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int t,i,j,M,F,len;

    string c;

    cin>>t;
    cin.ignore();

    for(i=0;i<t;i++)
    {
       getline(cin,c);

        len=c.size();

       for(j=0,M=0,F=0;j<len;j++)
       {
           if(c[j]=='M')
            M++;
           else if(c[j]=='F')
            F++;

       }
       if(M==F&&len>3)
        cout<<"LOOP"<<endl;
       else
        cout<<"NO LOOP"<<endl;


    }

}
