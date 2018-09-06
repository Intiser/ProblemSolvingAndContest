#include<iostream>

using namespace std;
int N[100000];


int check(int key,int index)
{
int i,d,l;
l=key;

for(i=0;i<=index;i++)
{    if(i==0)
      d=N[i]-0;
      else
      d=N[i]-N[i-1];

      if(d<l)
        l=l;
       else if(d==l)
       l--;
       else
       return 0;
}
return key;

}

int root(int index)
{
int low,high,mid,key,ret;

low=1;
high=100000000;
key=0;
while(low<high)
{
   mid=(low+high)/2;
   key=check(mid,index);

   if(key>0)
   {
   high=key;
    ret=key;
   }
   else
    {   low=mid+1;
   //ret=mid;
   }


}
return low;





}


int main()
{

int t,i,j,n,ans;

cin>>t;

for(i=0;i<t;i++)
{
cin>>n;
for(j=0;j<n;j++)
{

    cin>>N[j];

}
//ans=check(5,n-1);
ans=root(n-1);

cout<<"Case "<<i+1<<": "<<ans<<endl;

}






}

