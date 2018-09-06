#include<iostream>

using namespace std;

void swap1(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int t,n,s,i,j,k,a[50];

    cin>>t;
     for(i=0;i<t;i++)
     {
         cin>>n;
         for(j=0;j<n;j++)
         {
             cin>>a[j];
         }

         for(j=0,s=0;j<n;j++)
         {
             for(k=j+1;k<n;k++)
             {
                 if(a[j]>a[k])
                 {
                  // swap1(&a[k],&a[k-1]);
                   s++;
                 }
             }
         }

         cout<<"Optimal train swapping takes "<<s<<" swaps."<<endl;


     }




}
