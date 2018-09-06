#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int t,i,j,dd,yy,dd1,yy1,leap,a,b,c,p,q,r,m,n;
    char mm[20],mm1[20];
cin>>t;

for(i=0;i<t;i++)
{
    scanf("%[^ ] %d,%d",&mm,&dd,&yy);
    scanf("%[^ ] %d,%d",&mm1,&dd1,&yy1);
        fflush(stdin);
if(strcmp(mm,"February")==0||strcmp(mm,"January")==0)
{
     a=(yy)/4;
        b=(yy)/100;
        c=(yy)/400;
        m=a+c-b;

}
else{
        a=(yy-1)/4;
        b=(yy-1)/100;
        c=(yy-1)/400;
        m=a+c-b;
}
         p=(yy1)/4;
        q=(yy1)/100;
        r=(yy1)/400;
        n=p+r-q;
        leap=n-m;

       // printf("%s %d,%d",mm,dd,yy);
        //printf("\n");
        cout<<"Case "<<i+1<<": "<<leap<<endl;
         fflush(stdin);

    }

}
