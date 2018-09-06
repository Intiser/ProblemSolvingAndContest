#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli long long int

lli fct[25];

lli funct(string temp){
    int leng = temp.size();
    lli ans = 1;
    lli  cnt = 1;
    for(int i=1;i<leng;i++){
        if(temp[i]!=temp[i-1]){
            ans = ans*(i+1);
            ans = ans / fct[cnt];
            cnt = 1;
            //cout<<ans<<endl;
         }
         else{
           ans = ans*(i+1);
           cnt++;
          // cout<<cnt<<"%%"<<endl;
         }
         //cout<<temp[i]<<" "<<temp[i-1]<<endl;
    }
    if(cnt>1&&cnt<20) ans = ans/fct[cnt];
    //ans = ans * leng;
    //cout<<ans<<endl;
    return ans;
}
lli cmbn(string tmp){
    int arr[60];
    int fre[60];
    int len= tmp.size();
    //cout<<"1"<<endl;
    for(int i =0;i<60;i++){
        arr[i] = 0;
        fre[i] = 0;
    }

    for(int i=0;i<len;i++){
        if(tmp[i]>='a'&&tmp[i]<='z'){
            arr[tmp[i]-'a'+1]++;
        }
        else if(tmp[i]>='A'&&tmp[i]<='Z'){
            arr[tmp[i]-'A'+27]++;
        }
    }
    //cout<<"2"<<endl;
    for(int i=0;i<60;i++){
        if(arr[i]){
            fre[arr[i]]++;
        }
    }
    //cout<<"3"<<endl;
     lli tot;
    if(len<=18){
        tot = fct[len];
        for(int i=1;i<12;i++){
            while(fre[i]--){
                tot = tot/fct[i];
                //cout<<tot<<" "<<fct[i]<<endl;
            }
        }
    }
    else{
        tot = fct[18];
        for(int i=1;i<12;i++){
            while(fre[i]--){
                tot = tot/fct[i];
                //cout<<tot<<" "<<fct[i]<<endl;
            }
        }
        for(int i=19;i<len;i++) tot = tot*i;
    }
   // cout<<tot<<endl;
    return tot;
}


lli inter(string tmp,char c){
    sort(tmp.begin(),tmp.end());
    lli tot = cmbn(tmp);
    int len = tmp.size();
    lli per = tot/len;
    lli term = 0;
    for(int i=0;i<len;i++){
        if(tmp[i]!=c){
            term = term + per;
        }
        else
            break;
           // cout<<tmp<<" "<<term<<" "<<per<<" "<<tot<<" "<<c<<" "<<tmp[i]<<endl;
    }
    return term;
}

int main(){
    fct[0]=1;
    for(int i=1;i<=25;i++){
            fct[i]=fct[i-1]*i;
            //cout<<fct[i]<<endl;
    }
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s,tmp;
    while(cin>>s){
        if(s=="#") break;
        int len = s.size();
        lli res = inter(s,s[0]);
        for(int i = 1;i<len;i++){
            tmp = s.substr(i,len-i);
            res += inter(tmp,s[i]);
        }
        res++;
        printf("%10lld\n",res);
    }
 /*   string test;
    lli el;
    while(cin>>test){
        sort(test.begin(),test.end());
        el = funct(test);
        cout<<el<<endl;
    }*/
}
