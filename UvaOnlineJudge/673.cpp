#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;
 //char c[128],a[128],t;
int t;
string c,a;
int top;
stack<char>q;

int main()
{
    int i,j,l,cs;
cin>>cs;
cin.ignore();

for(j=0;j<cs;j++)
{
   // fflush(stdin);
    //  gets(a);

    getline(cin,a);
    int len = a.size();
    l=0;
    for(i=0;i<len;i++){

        if(a[i]=='('||a[i]=='['){
                q.push(a[i]);

           }
         else if(a[i]==')'){
                if(!q.empty()){
                    t = q.top();
                    if(t=='(')
                        q.pop();
                }
                else
                    l++;

          }
          else if(a[i]==']'){
                 if(!q.empty()){
                    t = q.top();
                    if(t=='[')
                        q.pop();
                 }
                 else
                    l++;

          }


    }
    if(q.empty()&&l==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

        while(!q.empty())
            q.pop();
      top=0;

}

}
