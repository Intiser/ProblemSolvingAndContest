#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,O,X,fo,fx;
    string s[3];

    cin>>t;

    while(t--){
        cin.ignore();

        for(int k=0;k<3;k++) cin>>s[k];

        X=0; O=0;
        for(int k=0;k<3;k++){
            for(int i=0;i<3;i++){
              if(s[k][i]=='X') X++;
              else if(s[k][i]=='O')  O++;
            }
        }
        fx=0;fo=0;
        if(s[0][0]=='X'&&s[0][1]=='X'&&s[0][2]=='X') fx=1;
        else if(s[1][0]=='X'&&s[1][1]=='X'&&s[1][2]=='X') fx=1;
        else if(s[2][0]=='X'&&s[2][1]=='X'&&s[2][2]=='X') fx=1;
        else if(s[0][0]=='X'&&s[1][0]=='X'&&s[2][0]=='X') fx=1;
        else if(s[0][1]=='X'&&s[1][1]=='X'&&s[2][1]=='X') fx=1;
        else if(s[0][2]=='X'&&s[1][2]=='X'&&s[2][2]=='X') fx=1;
        else if(s[0][0]=='X'&&s[1][1]=='X'&&s[2][2]=='X') fx=1;
        else if(s[0][2]=='X'&&s[1][1]=='X'&&s[2][0]=='X') fx=1;

        if(s[0][0]=='O'&&s[0][1]=='O'&&s[0][2]=='O') fo=1;
        else if(s[1][0]=='O'&&s[1][1]=='O'&&s[1][2]=='O') fo=1;
        else if(s[2][0]=='O'&&s[2][1]=='O'&&s[2][2]=='O') fo=1;
        else if(s[0][0]=='O'&&s[1][0]=='O'&&s[2][0]=='O') fo=1;
        else if(s[0][1]=='O'&&s[1][1]=='O'&&s[2][1]=='O') fo=1;
        else if(s[0][2]=='O'&&s[1][2]=='O'&&s[2][2]=='O') fo=1;
        else if(s[0][0]=='O'&&s[1][1]=='O'&&s[2][2]=='O') fo=1;
        else if(s[0][2]=='O'&&s[1][1]=='O'&&s[2][0]=='O') fo=1;



            if(X==O||X==O+1){
                if(fx==1&&fo==1) printf("no\n");
                else if(fo==1&&X!=O) printf("no\n");
                else if(fx==1&&X!=O+1) printf("no\n");
                else printf("yes\n");
            }
            else printf("no\n");

    }
}
