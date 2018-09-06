#include<iostream>

using namespace std;

int main()
{
    int en,a,b,c,d1,d2,d3,tot;

    while(cin>>en>>a>>b>>c){
            if(a==0&&b==0&&c==0&&en==0)
                break;

            d1=720;
            if(en<a){
                d1=d1+(en+(40-a))*9;
            }
            else
                d1=d1+(en-a)*9;


            d2=360;

            if(a>b){
                d2=d2+((40-a)+b)*9;
            }
            else
                d2=d2+(b-a)*9;

            if(b<c){
                d3=(b+(40-c))*9;
            }
            else
                d3=(b-c)*9;

            tot=d1+d2+d3;

           // cout<<d1<<" "<<d2<<" "<<d3<<endl;

          cout<<tot<<endl;



        }

}
