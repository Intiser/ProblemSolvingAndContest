#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,len;
    string s;
    while(cin>>n>>s){
        if(n==0&&s=="0") break;
        len = s.size();
        for(int i=0;i<len;i++){
            printf(" ");
            for(int j=0;j<n;j++){
                if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
                    printf("-");
                else
                    printf(" ");
            }
            printf(" ");
            if(i+1!=len) printf(" ");
        }
        printf("\n");
        for(int j=0;j<n;j++){

            for(int i=0;i<len;i++){
                if(s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9'||s[i]=='0')
                    printf("|");
                else
                    printf(" ");

            for(int k=0;k<n;k++) printf(" ");

                if(s[i]=='4'||s[i]=='2'||s[i]=='3'||s[i]=='1'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
                    printf("|");
                else
                    printf(" ");
                    if(i+1!=len) printf(" ");
            }
            printf("\n");
        }
         for(int i=0;i<len;i++){
            printf(" ");
            for(int j=0;j<n;j++){
                if(s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9')
                    printf("-");
                else
                    printf(" ");
            }
            printf(" ");
            if(i+1!=len) printf(" ");
        }
        printf("\n");
        for(int j=0;j<n;j++){

            for(int i=0;i<len;i++){
                if(s[i]=='0'||s[i]=='2'||s[i]=='6'||s[i]=='8')
                    printf("|");
                else
                    printf(" ");

            for(int k=0;k<n;k++) printf(" ");

                if(s[i]=='1'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
                    printf("|");
                else
                    printf(" ");
                    if(i+1!=len) printf(" ");
            }
            printf("\n");
        }
          for(int i=0;i<len;i++){
            printf(" ");
            for(int j=0;j<n;j++){
                if(s[i]=='0'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9')
                    printf("-");
                else
                    printf(" ");
            }
            printf(" ");
            if(i+1!=len) printf(" ");
        }
        printf("\n");
        printf("\n");
    }
}
