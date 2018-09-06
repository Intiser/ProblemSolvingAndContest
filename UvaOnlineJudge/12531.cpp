#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int m;
    char x='Y',y='N';
    while(scanf("%d",&m)!=EOF)
    {
        printf("%c\n",m%6?y:x);


    }

}
