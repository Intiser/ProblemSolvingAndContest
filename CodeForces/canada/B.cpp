#include<iostream>
#include<stdio.h>

using namespace std;


int nmbr(char c){

        if(c=='a') return 4;
        if(c=='b') return 5;
        if(c=='c') return 6;
        if(c=='d') return 3;
        if(c=='e') return 2;
        if(c=='f') return 1;

}

int main(){
    int64_t n;
    string s;
    cin>>s;
    int64_t siz = s.size();
    int64_t tmp = 0;
    for(int i=0;i<siz-1;i++){
        tmp = tmp * 10 + (s[i]-'0');
    }
    int64_t d =(tmp-1)/4;
    int64_t e = (tmp-1)%4;
    int64_t tot = 0;
    if(e>1){
        /*tot = tot + tmp - 3;
        tot = tot + d * 12;
        tot = tot + ((e-2)*6);
        if(e-2==0) tot = tot + nmbr(s[siz-1]);
        else  tot = tot + nmbr(s[siz-1]);*/
        cout<<(tmp-3) + d * 12 + (e-2)*6 + nmbr(s[siz-1])<<endl;
    }
    else{
        /*tot = tot + tmp - 1;
        tot = tot + d*12;
        tot = tot + (e*6);

        if(e==0) tot = tot + nmbr(s[siz-1]);
        else  tot = tot + nmbr(s[siz-1]);*/
        //cout<<tot<<endl;
        cout<<(tmp-1) + d * 12 + (e)*6 + nmbr(s[siz-1])<<endl;

    }
    //cout<<d<<" "<<e<<endl;
    //cout<<<<endl;
}
