#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int funct(string s,string t,int len){
    int res = 0;
    for(int i=0,j=len-1;i<len&&j>=0;i++,j--){
        if(s[i]!=t[j]) return -1;
    }
    return 1;
}
int div(string s,string t,int len){
    if(len == 1){
        if(s==t) return 1;
        else return -1;
    }
    int a= len/2;
    int b = len - len/2;
    string s1 = s.substr(0,a);
    string s2 = s.substr(a,b);
    string t1 = t.substr(0,b);
    string t2 = t.substr(b,a);
    cout<<s1<<" "<<s2<<" "<<t1<<" "<<t2<<endl;
    int ret = 0;
    ret = div(s1,t2,a);
    if(ret == -1) return -1;
    ret = div(s2,t1,b);
    if(ret == -1) return -1;
    return 1;
}

string small(string s){
    if(s.length()%2==1) return s;
    string s1 = small(s.substr(0,s.length()/2));
    string s2 = small(s.substr(s.length()/2,s.length()));
    //cout<<s1<<" "<<s2<<endl;
    if(s1<s2) return s1+s2;
    return s2+s1;
}

int main(){
   // accepted
    string s1,s2;
    cin>>s1;
    cin>>s2;
    //int l = s1.size();
    //int r = div(s1,s2,l);
    string t1 = small(s1);
    string t2 = small(s2);
    //sort(s1.begin(),s1.end());
   // sort(s2.begin(),s2.end());
    if(t1==t2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
