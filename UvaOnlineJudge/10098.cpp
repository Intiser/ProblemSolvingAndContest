#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>

using namespace std;

#define lli long long int

lli fct[12];


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
    lli tot = fct[len];
    for(int i=1;i<12;i++){
        while(fre[i]--){
            tot = tot/fct[i];
            //cout<<tot<<" "<<fct[i]<<endl;
        }
    }
   // cout<<tot<<endl;
    return tot;
}

/*void funct(string s){
    string tmp;
    string tmp1;
    string tmp2;
    string temp;
    string ans;
    //temp = s;
    int len = s.size();
    sort(s.begin(),s.end());
    temp = s;
    lli tot = cmbn(s);
    for(int i=0;i<tot;i++){
        temp = s;
        len = temp.size();
        lli tt;
        lli tp = tot/len;
        int p = i/tp;
        ans = "";
        ans += (temp[p]);
        tmp1 = temp.substr(0,p);
        tmp2 = temp.substr(p+1,len-p-1);
        temp = "";
        temp += tmp1;
        temp += tmp2;
        len--;
        for(int j=0;j<len;len--){
            tt = cmbn(temp);
            tp = tt/len;
            p = i/tp;
            ans += (temp[p]);
            tmp1 = temp.substr(0,p);
            tmp2 = temp.substr(p+1,len-p-1);
            temp = "";
            temp += tmp1;
            temp += tmp2;
        }
        cout<<ans<<endl;
    }
}*/
int flag[130];

void ok(string s){
    string ans,trans,temp;
    int len = s.size();
    sort(s.begin(),s.end());
    lli cmb = cmbn(s);
    //cout<<"tot ="<<cmb<<endl;
    for(int j=0;j<cmb;j++){
        trans = s;
        lli tot=j,mul;
        lli fac;
        lli l = len , a;
        for(int i=0 ;i <130 ;i++) flag[i] = i;
        for(int i=1;i<=len;i++){

            fac = cmbn(trans.substr(0,len-i));
            mul = tot/fac;
            //cout<<"mul ="<<mul<<endl;
            tot = tot - mul * fac ;
            ans+=(trans[mul]);
            temp = trans;
            trans.clear();
            for(int j=0;j<l;j++){
                if(flag[j]!=mul) trans+=(temp[j]);

            }
        }
        cout<<ans<<endl;
        ans.clear();
        trans.clear();
        for(int i =0 ;i < 130 ; i++ ){
            flag[i]=0;

        }
    }
}

int main(){
    fct[0] = 1;
    for(int i=1;i<12;i++) {
        fct[i] = fct[i-1]*i;
    }
    int t;
    string test;
    lli el;
    cin>>t;
    while(t--){
        cin>>test;
        ok(test);
        printf("\n");
        //cout<<el<<endl;
    }
}
