#include<iostream>

using namespace std;
int a[1000],ind,tot,mx;

int funct(int mid)
{
    int i,total=0,cnt=1,key;
    key=mid;

    for(i=0;i<ind;i++)
    {
        if(key-a[i]<0)
        {
            cnt++;
            key=mid-a[i];
        }
        else if(key-a[i]==0&&(i+1)<ind)
        {
            cnt++;
            key=mid;
        }
        else
        {
            key=key-a[i];
        }



//cout<<a[i]<<" "<<cnt<<endl;

    }







    return cnt;

}
int bsearch(int c)
{
   int high,low,mid,key,ret;
   low=mx;
   high=tot;

   while(high>low)
   {
   mid=(high+low)/2;

   key=funct(mid);
   //cout<<key<<mid<<endl;
   if(key>c)
   {
       low=mid+1;
   }
   else if(key<c)
   {
       high=mid;
   }
   else
   {
       high=mid;
       ret=mid;
   }



   }
   return low;


}


int main()
{
    int t,n,i,j,mid,ans,c;
    //cin>>t;
    while(cin>>n>>c)
    {
        //cin>>n>>c;
        for(j=0,tot=0,mx=0,ind=0;j<n;j++)
        {
            cin>>a[j];
            tot=tot+a[j];
            ind++;
            if(a[j]>mx)
                mx=a[j];
        }

        ans=bsearch(c);

      //  cout<<"Case "<<i+1<<": "<<ans<<endl;

          cout<<ans<<endl;

    }



}
