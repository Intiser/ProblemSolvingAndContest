#include<iostream>

using namespace std;
int N[10000],Q[100000],high,low,mid;

int same(int key,int siz)
{
    int ret=-1;
   low=0;
   high=siz-1;
   while(low<=high)
   {
       mid=(low+high)/2;
       if(key>N[mid])
       {
           low=mid+1;
       }
       else if(key<N[mid])
       {
           high=mid-1;
       }
       else
        {ret=mid;
         high=mid-1;
        }

   }

    return ret+1;



}


int main()
{
    int n,q,i,j,temp,ans,siz,k=0;

    while(cin>>n>>q)
    {
        k++;
        if(n!=0&&q!=0)
        {
            siz=n;
            for(i=0;i<n;i++)
                cin>>N[i];

            for(i=0;i<n;i++)
           {

              for(j=1;j<n-i;j++)
            {
                if(N[j]<N[j-1])
                {
                    temp=N[j-1];
                    N[j-1]=N[j];
                    N[j]=temp;
                }
            }

            }

            for(j=0;j<q;j++)
            cin>>Q[j];

            cout<<"CASE# "<<k<<":"<<endl;
             for(j=0;j<q;j++)
                {
                 //  cin>>Q[j];
                   ans=same(Q[j],siz);
                   if(ans==0)
                   cout<<Q[j]<<" not found"<<endl;
                   else
                    cout<<Q[j]<<" found at "<<ans<<endl;

                }

        }
        else
            break;
    }

}
