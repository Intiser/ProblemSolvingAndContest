#include<iostream>

using namespace std;

int main()
{
    int t,i,j,k,c,cnt,size1,size2,val1,val2,fval;
    string s1,s2;

    while(cin>>s1>>s2)
  {
      size1=s1.size();
      size2=s2.size();

      if(size1==1&&s1[0]=='0'&&size2==1&&s2[0]=='0')
        break;

     cnt=0;
      for(i=size1-1,j=size2-1,c=0;i>=0&&j>=0;i--,j--)
        {
            val1=s1[i]-'0';
            val2=s1[j]-'0';

            fval=val1+val2+c;
             c=(fval/10);

             if(c>0)
             {
                 cnt++;
             }


        }

        if(cnt==0)
          cout<<"No carry operation."<<endl;
        else if(cnt==1)
         cout<<cnt<<" carry operation."<<endl;
         else
        cout<<cnt<<" carry operations."<<endl;

  }

}
