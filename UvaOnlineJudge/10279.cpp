#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    int n,m,i,j,k,cnt,l=1,flag,c;
     string s[110],ans[110],p[110],rslt[110];
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();


        for(k=0;k<n;k++)
           cin>>s[k];
        for(k=0;k<n;k++)
           cin>>p[k];

          // printf("ok");

         for(i=0;i<n;i++)
         {

             for(j=0,cnt=0;j<n;j++)
             {
                 if(s[i][j]!='*'){
                   if(i>0&&j>0)
                    {
                        if(s[i-1][j-1]=='*')
                        cnt++;
                    }

                    if(i<n-1&&j<n-1)
                    {
                        if(s[i+1][j+1]=='*')
                        cnt++;
                    }
                    if(i<n-1&&j>0)
                    {
                        if(s[i+1][j-1]=='*')
                        cnt++;
                    }
                    if(i>0&&j<n-1)
                    {
                        if(s[i-1][j+1]=='*')
                        cnt++;
                    }
                    if(i>0&&i<n&&j>=0&&j<n)
                    {
                        if(s[i-1][j]=='*')
                        cnt++;
                    }
                    if(i>=0&&i<n-1&&j>=0&&j<n)
                    {
                        if(s[i+1][j]=='*')
                        cnt++;
                    }
                    if(i>=0&&i<n&&j>0&&j<n)
                    {
                        if(s[i][j-1]=='*')
                        cnt++;
                    }
                    if(i>=0&&i<n&&j>=0&&j<n-1)
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

         //printf("ok");

         flag=0;
         for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(p[i][j]=='x'&&s[i][j]=='*'){
                      flag=1;
                }
            }
         }
        // printf("ok");
         if(flag==1){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(p[i][j]=='x'||ans[i][j]=='*'){
                        c=ans[i][j];
                        rslt[i].push_back(c);
                    }
                    else
                        rslt[i].push_back('.');
                }
            }
         }//printf("ok");
         else{
             for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(p[i][j]=='x'){
                        c=ans[i][j];
                        rslt[i].push_back(c);
                    }
                    else
                        rslt[i].push_back('.');
                }
            }
         }

         for(i=0;i<n;i++){
            cout<<rslt[i]<<endl;
            rslt[i].clear();
            ans[i].clear();
         }

         if(t) printf("\n");

    }
}
