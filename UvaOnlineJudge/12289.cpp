#include<iostream>

using namespace std;

int main()
{
    int t;

    cin>>t;
    cin.ignore();

    string s;

    for(int i=0;i<t;i++)
    {
        cin>>s;

        if(s[0]=='o'&&s[1]=='n'&&s[2]=='e')
        {
            cout<<"1"<<endl;
        }
        else if(s[0]!='o'&&s[1]=='n'&&s[2]=='e')
        {
            cout<<"1"<<endl;
        }
        else if(s[0]=='o'&&s[1]!='n'&&s[2]=='e')
        {
            cout<<"1"<<endl;
        }
        else if(s[0]=='o'&&s[1]=='n'&&s[2]!='e')
        {
            cout<<"1"<<endl;
        }


        if(s[0]=='t'&&s[1]=='w'&&s[2]=='o')
       {
           cout<<"2"<<endl;
       }
        else if(s[0]!='t'&&s[1]=='w'&&s[2]=='o')
       {
           cout<<"2"<<endl;
       }
        else if(s[0]=='t'&&s[1]!='w'&&s[2]=='o')
       {
           cout<<"2"<<endl;
       }
        else if(s[0]=='t'&&s[1]=='w'&&s[2]!='o')
        {
            cout<<"2"<<endl;
        }




        if(s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e')
       {
           cout<<"3"<<endl;
       }
       else if(s[0]!='t'&&s[1]=='h'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e')
       {
           cout<<"3"<<endl;
       }
       else if(s[0]=='t'&&s[1]!='h'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e')
       {
           cout<<"3"<<endl;
       }
       else if(s[0]=='t'&&s[1]=='h'&&s[2]!='r'&&s[3]=='e'&&s[4]=='e')
        {
            cout<<"3"<<endl;
        }
       else if(s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[3]!='e'&&s[4]=='e')
       {
           cout<<"3"<<endl;
       }
       else if(s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[3]=='e'&&s[4]!='e')
        {
            cout<<"3"<<endl;
        }


    }

}
