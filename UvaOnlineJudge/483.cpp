#include<stdio.h>
#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string>


using namespace std;

int main()
{
    string s1,a1;
    int i,j,k,cnt,st,en,len,flag;
    while(getline(cin,s1)){
            //cin.ignore();
        a1.clear();
        len=s1.size();
        flag=0;
        for(i=0,cnt=0;i<len;i++){
            if(s1[i]==' '){
                cnt=0;
                en=i-1;
                //a1.push_back(' ');
                //flag=0;
            }
            else{
                cnt++;
                flag=1;
            }

            if(cnt==1)
                st=i;

            if(flag==1&&cnt==0){
                k=st;
              while(st<=en){
                  a1.push_back(s1[en]);
                   en--;
                  //cout<<s1[en+1];
              }
              a1.push_back(' ');
              flag=0;
            }

        }
        if(flag==1){
             k=st;en=len-1;
              while(st<=en){
                  //a1[k]=s1[en];
                  a1.push_back(s1[en]);
                  k++; en--;
                  //cout<<s1[en+1];
              }


        }


        cout<<a1<<endl;
        //for(i=0;i<len;i++)
          //  cin>>a1[i];
          //cin.ignore();
        s1.clear();

    }

}
