#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

string s;



int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    while(cin>>s){
        int len = s.size();
        int val = len/2;
        int mid = val;
        if(len%2==1) mid = mid + 1;
        string st1,st2,st3;
        int flag = -1;
        st1 = s.substr(0,val);
        st2 = s.substr(mid,val);
        //cout<<st1<<" "<<st2<<endl;
        reverse(st2.begin(),st2.end());
        if(st1==st2) flag = 1;
        if(flag==-1){
                mid++;
            for(int i=mid,j=0;i<len;i++,j++){
                //cout<<i-(mid-j)<<" "<<i-(mid-j)-1<<endl;
                int dis = len-i;
               // cout<<dis<<endl;
                st1 = s.substr(i,dis);
                st2 = s.substr(i-dis,dis);
                st3 = s.substr(i-dis-1,dis);

                cout<<st1<<" "<<st2<<" "<<st3<<endl;
                reverse(st2.begin(),st2.end());
                reverse(st3.begin(),st3.end());
                if(st1==st2){
                    flag = i-dis-1;
                    break;
                }
                if(st1==st3){
                    flag = i-dis-2;
                    break;
                }
            }
            if(flag==-1) flag = len - 2;
            string ns = s;
            for(int i=flag;i>=0;i--){
                ns = ns + s[i];
            }
            //cout<<flag<<endl;
            cout<<ns<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}
