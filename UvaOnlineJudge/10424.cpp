#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int len1,len2,tot1,tot2,tmp,temp;
    double per;
    string s1,s2;
    while(getline(cin,s1)){
        getline(cin,s2);
        len1=s1.size();
        tot1=0;
        for(int i=0;i<len1;i++){
            if(s1[i]>='A'&&s1[i]<='Z'){
                tot1+=(s1[i]-'A'+1);
            }
            else if(s1[i]>='a'&&s1[i]<='z'){
                tot1+=(s1[i]-'a'+1);
            }
        }
        len2=s2.size();
        tot2=0;
        for(int i=0;i<len2;i++){
            if(s2[i]>='A'&&s2[i]<='Z'){
                tot2+=(s2[i]-'A'+1);
            }
            else if(s2[i]>='a'&&s2[i]<='z'){
                tot2+=(s2[i]-'a'+1);
            }
        }
        tmp=0;temp=0;
        temp=tot1;
        while(temp/10){
            tmp=0;
            while(temp/10){
                tmp+=temp%10;
                temp=temp/10;
            }
            tmp+=temp%10;
            temp=tmp;
        }
        tot1=temp;
        tmp=0;temp=0;
        temp=tot2;
        while(temp/10){
            tmp=0;
            while(temp/10){
                tmp+=temp%10;
                temp=temp/10;
            }
            tmp+=temp%10;
            temp=tmp;
        }
        tot2=temp;


        if(tot1>tot2)
            per = double(tot2/double(tot1))*100.0;
        else
            per = double(tot1/double(tot2))*100.0;

       // cout<<tot1<<" "<<tot2<<endl;
       // cout<<per<<endl;
       printf("%.2lf %%\n",per);
    }
}
