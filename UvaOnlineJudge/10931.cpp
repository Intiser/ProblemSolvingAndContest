#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int n,t,i,j,k,cnt,l=0;
    string st;
    while(cin>>t) {
        if(t==0) break;
        for(i=1,n=0,cnt=0,l=0;t>0;i=i*10,l++){
            j=t%2;
            if(j==1) cnt++;
            t=t/2;
            if(j==0)st.push_back('0');
            else st.push_back('1');
        }
          //cout<<st<<endl;
          //st.clear();
          printf("The parity of ");
          for(i=l-1;i>=0;i--) cout<<st[i];
          printf(" is %lld (mod 2).\n",cnt);
          st.clear();
    }

}
