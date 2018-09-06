#include<iostream>

using namespace std;


int main(void)

{
   long long int i,n,a,l,tr,j=0,mx,h,s,t;

while(cin>>s>>t)
{if(s==0&&t==0)
break;

if(t>s)
{
    l=s;
    h=t;
}
else
{
    h=s;
    l=t;
}

for(j=l,mx=0;j<=h;j++)
 {
     n=j;
     for(i=1;i==1||n!=1;i++)
       {
           if(n%2==0)
            n=n/2;
           else
            n=3*n+1;


       }

    // cout<<i-1<<endl;
    if(mx<(i-1))
       {mx=i-1;
        tr=j;  }
 }
 cout<<"Between "<<l<<" and "<<h<<", "<<tr<<" generates the longest sequence of "<<mx<<" values."<<endl;
}
}
