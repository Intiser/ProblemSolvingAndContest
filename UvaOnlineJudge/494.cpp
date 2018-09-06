#include<iostream>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
    string c;
    int i,j,cnt,flag;
    while(getline(cin,c))
    {

        for(i=0,cnt=0,flag=0;c[i]!='\0';i++)
        {

            if(((c[i]>='a'&&c[i-2]<='z')||(c[i]>='A'&&c[i]<='Z')))
            flag=1;
            else if(flag==1)
            {
                cnt++;
                flag=0;
            }
        }

        if(flag==1)
            cnt++;


          cout<<cnt<<endl;
    }
}
