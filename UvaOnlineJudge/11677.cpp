#include<iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,mint,hr,mn;

    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&h2==0&&m1==0&&m2==0)
            break;


          if(h2>h1||(h1==h2&&m2>=m1))
           {
               hr=h2-h1;
               mn=m2-m1;
               mint=hr*60+mn;
           }
           else if(h1==h2&&m2<m1)
             {
                 hr=23;
                 mn=m2+(60-m1);
                 mint=hr*60+mn;
             }
           else
           {
               hr=(23-h1)+h2;
               mn=m2+(60-m1);
               mint=hr*60+mn;
           }

           cout<<mint<<endl;
    }

}
