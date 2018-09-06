#include<iostream>

using namespace std;


int main(void)

{
   long long int i,n,a,l,tr,j=0;

    while(cin>>a>>l)
{
    if(a<0&&l<0)
        break;


        j++;
        n=a;
    for(i=1;n!=1;i++)
    {

         if(n%2==0)
            n=n/2;
         else
            n=3*n+1;

            if(l<n)
                break;

    }

    cout<<"Case "<<j<<": A = "<<a<<", limit = "<<l<<", number of terms = "<<i<<endl;

}
}
