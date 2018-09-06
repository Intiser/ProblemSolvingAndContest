#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>

using namespace std;

int V[110],st;
vector<int>TR[110];

void dfs(int n)
{


    for(int i=0;i<TR[n].size();i++)
    {
        int a=TR[n][i];
        if(!V[a])
        {
            V[a]=1;
            dfs(a);
        }

    }
    return;


}

int main()
{
   int x,y,z,t,inp;
   int i,j,k;
   int ct;

    while(cin>>x&&x)
    {
        while(cin>>y&&y)
        {

            while(cin>>z&&z)
            {
                TR[y].push_back(z);
            }
        }

        cin>>t;
        for(i=0;i<t;i++)
        {
            cin>>inp;
            st=-1;
            dfs(inp);
             ct=0;
            for(k=1;k<=x;k++)
            {
                if(!V[k])
                    ct++;
            }
            cout<<ct;
            for(k=1;k<=x;k++)
            {
                if(!V[k])
                    printf(" %d",k);
            }
            printf("\n");

            for(j=0;j<110;j++)
                V[j]=0;

        }

        for(i=0;i<110;i++)
        TR[i].clear();

    }


}
