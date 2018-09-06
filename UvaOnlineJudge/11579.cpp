#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>

using namespace std;
double Array[10009];

int main()
{
  int t,i,j,n,k,l,p,q;
  double x,y,z,s,area;

  cin>>t;
  for(k=0;k<t;k++)
  {
      cin>>n;
      for(i=0;i<n;i++)
      cin>>Array[i];
      l=n-1;
      sort(Array,Array+n);
      p=0;
      int a,b,c;
      area=0;
      double maxm=0;
      for(i=2;i<n;i++){
         x=Array[i];
         y=Array[i-1];
         z=Array[i-2];



          s=(x+y+z)/2;
          area=sqrt(s*(s-x)*(s-y)*(s-z));
        if(maxm<area){
            maxm = area;
        }


      }
      printf("%.2lf\n",maxm);

//for(i=0;i<n;i++)
    //  cout<<Array[i];


  }


}
