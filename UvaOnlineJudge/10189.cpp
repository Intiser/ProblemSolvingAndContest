#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int n,m,i,j,k,cnt,l=1;//ans[110][110];
    string s[110],ans[110];
    //char ans[110][110];

    while(cin>>n>>m)
    {
       cin.ignore();

       if(n==0&&m==0)
        break;

        if(l!=1)
            printf("\n");

         for(k=0;k<n;k++)
           cin>>s[k];

         for(i=0;i<n;i++)
         {

             for(j=0,cnt=0;j<m;j++)
             {
                 if(s[i][j]!='*'){
                   if(i>0&&j>0)
                    {
                        if(s[i-1][j-1]=='*')
                        cnt++;
                    }

                    if(i<n-1&&j<m-1)
                    {
                        if(s[i+1][j+1]=='*')
                        cnt++;
                    }
                    if(i<n-1&&j>0)
                    {
                        if(s[i+1][j-1]=='*')
                        cnt++;
                    }
                    if(i>0&&j<m-1)
                    {
                        if(s[i-1][j+1]=='*')
                        cnt++;
                    }
                    if(i>0&&i<n&&j>=0&&j<m)
                    {
                        if(s[i-1][j]=='*')
                        cnt++;
                    }
                    if(i>=0&&i<n-1&&j>=0&&j<m)
                    {
                        if(s[i+1][j]=='*')
                        cnt++;
                    }
                    if(i>=0&&i<n&&j>0&&j<m)
                    {
                        if(s[i][j-1]=='*')
                        cnt++;
                    }
                    if(i>=0&&i<n&&j>=0&&j<m-1)
                    {
                        if(s[i][j+1]=='*')
                        cnt++;
                    }


                ans[i].push_back(48+cnt);
                 }
                else
                  ans[i].push_back('*');

                cnt=0;

             }
         }

          printf("Field #%d:\n",l);
         for(k=0;k<n;k++)
           {cout<<ans[k]<<endl;
            ans[k].clear();
           }


           //printf("\n");

         l++;

    }

}
