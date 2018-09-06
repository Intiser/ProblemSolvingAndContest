#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

int V[110],cnt,flag;
vector<int>A[110];

void dfs(int n,int x)
{
    //if(V[n]==1)
     //   flag==1;

  V[n]=x;

    for(int i=0;i<A[n].size();i++)
    {
        int v=A[n][i];

        if(!V[v])
           {
               dfs(v,x);
           }
           else if(V[n]!=V[v])
            flag=1;

    }
  return;

}



int main()
{
    int t,n,len,a,b;
    int i,j,k,l;
    char c;
    string s;

    cin>>t;
    for(l=0;l<t;l++)
    {
        scanf("\n");
        cin>>c;
        cin.ignore();
        n=c%64;
        while(getline(cin,s))
        {
            len=s.size();
            if(len==0)
                break;

            a=s[0]%65;
            b=s[1]%65;
            A[a].push_back(b);
            A[b].push_back(a);
            //cout<<len<<endl;
        }

        cnt=0;
        for(i=0;i<n;i++)
        {
            j=i+1;
            flag=0;
            if(V[i]!=0)
            {j=V[i];
            flag=1;
            }
            else
            dfs(i,j);

            if(flag==0)
                    cnt++;


        }

        cout<<cnt<<endl;

        if(l!=(t-1))
            cout<<endl;

        for(i=0;i<110;i++)
        {
            A[i].clear();
            V[i]=0;
        }

    }

}
