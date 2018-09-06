#include<iostream>
#include<string.h>

using namespace std;

int main()
{ char c[20];
int i=1;
    while(cin>>c)
    {
        if(c[0]!='*')
        {
            if(strcmp(c,"Hajj")==0)
                cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            else
                 cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;


        }
        else
            break;

            i++;


    }
}
