#include<iostream>


using namespace std;

int p[50000],q[25000],k,long1,short1;

int shorter(int item,int size1)
{
int low ,high,mid,res;
low=0;high=size1-1;

if(item<=p[0])
{
    return -1;
}


while(low<=high)
{
mid=(low+high)/2;
   if(item>p[mid])
   {
      low=mid+1;
       res=mid;

   }
   else if(item<p[mid])
   {
      high=mid-1;

   }
   else
   {
      res=mid-1;
      high=mid-1;

   }

}

return p[res];


}


int longer(int item,int size1)
{
int low ,high,mid,res;
low=0;high=size1-1;

if(item>=p[high])
{
return -1;
}

while(low<=high)
{
mid=(low+high)/2;
   if(item>p[mid])
   {
      low=mid+1;


   }
   else if(item<p[mid])
   {
      high=mid-1;
      res=mid;

   }
   else
   {
      res=mid+1;
      low=mid+1;

   }

}

return p[res];


}



int main()
{
int  n,l,i,j,key;

while(cin>>n)
{
for(i=0;i<n;i++)
{
cin>>p[i];
}

cin>>l;
for(j=0;j<l;j++)
{
cin>>q[j];
key=q[j];
   short1=shorter(key,i);
   long1=longer(key,i);
    if(long1==-1&&short1==-1)
     cout<<"X"<<" "<<"X"<<endl;
   else if(long1==-1)
     cout<<short1<<" "<<"X"<<endl;
    else if(short1==-1)
     cout<<"X"<<" "<<long1<<endl;
    else
   cout<<short1<<" "<<long1<<endl;

}

}



}
