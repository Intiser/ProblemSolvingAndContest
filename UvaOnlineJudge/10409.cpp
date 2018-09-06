#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
    int n,top,btm,north,south,east,west,temp;
    string cmd;
    while(cin>>n){
        if(n==0) break;

        top=1; btm=6; north=2; south=5; west=3; east=4;
        for(int i=0;i<n;i++){
                cin>>cmd;
                if(cmd[0]=='n'&&cmd[1]=='o'&&cmd[2]=='r'&&cmd[3]=='t'&&cmd[4]=='h')
                {
                        temp=top; top=south; south=btm; btm=north; north=temp;
                }
                else if(cmd[0]=='s'&&cmd[1]=='o'&&cmd[2]=='u'&&cmd[3]=='t'&&cmd[4]=='h')
                {
                        temp=top; top=north; north=btm; btm=south; south=temp;
                }
                else if(cmd[0]=='e'&&cmd[1]=='a'&&cmd[2]=='s'&&cmd[3]=='t')
                {
                        temp=top; top=west; west=btm; btm=east; east=temp;
                }
                else if(cmd[0]=='w'&&cmd[1]=='e'&&cmd[2]=='s'&&cmd[3]=='t')
                {
                        temp=top; top=east; east=btm; btm=west; west=temp;
                }
        }
        cout<<top<<endl;
    }
}
