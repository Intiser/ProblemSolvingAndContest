#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int main(){
    string s;
    cin>>s;
    int siz = s.size();
    int in = 0;
    int d1;
    int d2;
    int mn;
    int tot = 0;
    for(int i=0;i<siz;i++){
            int now = s[i] - 'a';
            if(now>in){
                d1 = now - in;
                d2 = (26-now) + in;
            }
            else{
                d1 = in - now;
                d2 = (26 - in) + now;
            }
            mn = min(d1,d2);
            in = s[i] - 'a';
            //cout<<mn<<endl;
            tot = tot +mn;
    }
    cout<<tot<<endl;
}
