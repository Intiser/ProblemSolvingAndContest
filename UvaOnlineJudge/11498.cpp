#include<iostream>

using namespace std;

int main()
{
    int k,X,Y,x,y,i,j;

    while(cin>>k)
    {
        if(k==0)
            break;

        cin>>X>>Y;
       for(i=0;i<k;i++)
       {
           cin>>x>>y;
           if(X==x||Y==y)
           {
               cout<<"divisa"<<endl;
           }
           else if(x>X&&y>Y)
           {
               cout<<"NE"<<endl;
           }
           else if(x<X&&y>Y)
           {
               cout<<"NO"<<endl;
           }
           else if(x>X&&y<Y)
           {
               cout<<"SE"<<endl;
           }
           else if(x<X&&y<Y)
           {
                cout<<"SO"<<endl;
           }
       }

    }

}
