#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    string s;
    long long int len,i,j,k,total,term;

    while(cin>>s)
    {
        len=s.size();

        if(len==1&&s[0]=='0')
            break;

        total=0;
        for(i=len-1,k=1;i>=0;i--,k++)
        {

            term= (s[i]%48)*(pow(2,k)-1);

            total=total+term;

        }

        cout<<total<<endl;

    }

}
