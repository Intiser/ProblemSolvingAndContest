#include<iostream>
#include<stdio.h>

using namespace std;


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int n,in;
    string s[100000],t,a;
    while(cin>>n){
        in = -1;
        for(int i=0;i<n;i++){
            cin>>t;
            if(t=="Sleep"){
                cin>>a;
                in++;
                s[in] = a;
            }
            else if(t=="Kick"){
                if(in>-1)
                in--;
            }
            else if(t=="Test"){
                if(in>-1){
                    cout<<s[in]<<endl;
                }
                else
                    cout<<"Not in a dream"<<endl;
            }
        }
    }
}
