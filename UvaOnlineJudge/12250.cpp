#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int i=1;
    char c[20];

    while(cin>>c)
    {

        if(c[0]!='#')
        {
            if(strcmp(c,"HELLO")==0)
                cout<<"Case "<<i<<": ENGLISH"<<endl;
            else if(strcmp(c,"HOLA")==0)
                cout<<"Case "<<i<<": SPANISH"<<endl;
             else if(strcmp(c,"HALLO")==0)
                cout<<"Case "<<i<<": GERMAN"<<endl;
             else if(strcmp(c,"BONJOUR")==0)
                cout<<"Case "<<i<<": FRENCH"<<endl;
             else if(strcmp(c,"CIAO")==0)
                cout<<"Case "<<i<<": ITALIAN"<<endl;
             else if(strcmp(c,"ZDRAVSTVUJTE")==0)
                cout<<"Case "<<i<<": RUSSIAN"<<endl;
              else
                cout<<"Case "<<i<<": UNKNOWN"<<endl;
        }
        else
            break;

        i++;
    }





}
