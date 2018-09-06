#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int D,I,ttl,len,i,j,n,K,t,l,End,p,ball,tmp;

cin>>t;

    for(l=0;l<t;l++)
    {
        cin>>D>>I;

       len=pow(2,D)-1;
       n=I;
       K=D-1;
       i=1;
       p=1;
       ball=1;
       tmp=I;

       while(K--)
       {
          if(tmp%2==0){
                if(tmp!=0)
                {tmp=tmp/2;
                ball=ball*2+1;
                }
                else
                    ball=ball*2;
               // cout<<ball<<" "<<tmp<<endl;
          }
          else{
            tmp=tmp/2;
             tmp+=1;
            ball=ball*2;
          //cout<<ball<<" "<<tmp<<endl;
          }

       }

       cout<<ball<<endl;

        //cout<<len<<endl;
    }

}

