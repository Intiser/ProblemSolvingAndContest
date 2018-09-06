#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,c,d,l,F,i,j,k,cnt;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        cnt=0;
        for(i=0;i<=l;i++)
        {
            F=a*i*i+b*i+c;
            if(F%d==0)
                cnt++;
        }
        printf("%d\n",cnt);

    }

}
