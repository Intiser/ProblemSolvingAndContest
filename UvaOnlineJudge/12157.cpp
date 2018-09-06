#include<iostream>

using namespace std;

int main()
{

    int i,j,t,n,b[10],mx;
    char a[10][100];

cin>>t;
for(j=0;j<t;j++)
{
   for(i=0,mx=0;i<10;i++)
       {
           cin>>a[i];
           cin>>b[i];
           if(b[i]>mx)
            mx=b[i];

       }
       cout<<"Case #"<<j+1<<":"<<endl;

    for(i=0;i<10;i++)
     {    if(mx==b[i])
           cout<<a[i]<<endl;

       }


}

}
