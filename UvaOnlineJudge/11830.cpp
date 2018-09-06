#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    char m,c,a;
    int fl =0;
    while(scanf("%c ",&m)){
        scanf("%c",&c);
        fl = 0;
        if(m=='0'&&c=='0'){
            break;

        }
        if(m!=c) {
            cout<<c;
            fl = 1;
            }
        while(scanf("%c",&c)){
                if(c=='\0'||c==' '||c=='\n') break;
            if(m!=c&&(c!='0'||fl==1)) {
                printf("%c",c);
                fl =1;
            }
        }
        if(fl==0) printf("0");
        printf("\n");
    }
}
