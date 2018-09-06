#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;


int main()
{
    int t,i;
    char c[10];

    cin>>t;
    fflush(stdin);

    for(i=0;i<t;i++)
    {
        gets(c);

        if(strlen(c)==3)
        {
          if((c[0]=='o'&&c[1]=='n')||(c[0]=='o'&&c[2]=='e')||(c[1]=='n'&&c[2]=='e'))
            cout<<'1'<<endl;
          else if((c[0]=='t'&&c[1]=='w')||(c[0]=='t'&&c[2]=='o')||(c[2]=='o'&&c[1]=='w'))
            cout<<'2'<<endl;

        }
         else if(strlen(c)==5)
             cout<<'3'<<endl;

    }


}
