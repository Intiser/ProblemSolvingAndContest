#include<iostream>
#include<stdio.h>
#include<algorithm>


using namespace std;



pair<int,int>Arr[100010];
pair<int,int>A[100010];

int M,n;



int main()
{

   int t,i,j,k,X,Y,dis,Maxm,cnt,p,fl,g,flag,h,x,y;

   cin>>t;

   for(k=0;k<t;k++)
       {
           cin>>M;
           n=0;
         while(cin>>x>>y)
         {
             if(x==0&&y==0)
                break;

                 Arr[n].first=x;
                 Arr[n].second=y;

             n++;

         }

         sort(Arr,Arr+n);

         Maxm=0,cnt=0,p=0;
         for(i=0,j=0;i<=n;i++)
         {
                    X=Arr[i].first;
                    Y=Arr[i].second;


                    flag=0;
                    while(X<=p&&i<=n)
                    {
                              if(Maxm<Y)
                                 {
                                    Maxm=Y;
                                    A[j].first=X; A[j].second=Y;
                                 }
                              i++;
                              flag=1;

                              X=Arr[i].first;
                              Y=Arr[i].second;


                    }

                    if(flag==1)
                        {
                            cnt++;
                              j++;
                              p=Maxm;
                              i--;

                       }


                     if(p>=M)
                        break;



             }



              if(p<M)
                cnt=0;


             cout<<cnt<<endl;

             for(j=0;j<cnt;j++)
                 {
                      X=A[j].first;
                      Y=A[j].second;
                    printf("%d %d\n",X,Y);
                 }

             if(k<t-1)
                    cout<<endl;




         }

         return 0;

}


