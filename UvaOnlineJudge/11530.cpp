#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,i,j,k,cnt,n,p,len;
   string c;

   scanf("%d",&t);

   cin.ignore();

   for(k=0;k<t;k++)
  {
         getline(cin,c);

        len=c.size();

         for(i=0,cnt=0;i<len;i++)
 {    if(c[i]==' ')
         cnt++;
         else if(c[i]>='a'&&c[i]<='z'){

           if(c[i]=='a'||c[i]=='d'||c[i]=='g'||c[i]=='j'||c[i]=='m'||c[i]=='p'||c[i]=='t'||c[i]=='w')
            cnt++;
           else if(c[i]=='b'||c[i]=='e'||c[i]=='h'||c[i]=='k'||c[i]=='n'||c[i]=='q'||c[i]=='u'||c[i]=='x')
            cnt+=2;
           else if(c[i]=='c'||c[i]=='f'||c[i]=='i'||c[i]=='l'||c[i]=='o'||c[i]=='r'||c[i]=='v'||c[i]=='y')
            cnt+=3;
           else if(c[i]=='s'||c[i]=='z')
            cnt+=4;



         }


    }


         cout<<"Case #"<<k+1<<": "<<cnt<<endl;
         fflush(stdin);

   }



}
