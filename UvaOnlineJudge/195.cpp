#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

bool compare(const char &x,const char &y){
        int a,b;
        if(x>95){
            a=x-'a'+1;
        }
        else{
            a=x-'A'+1;
        }
        if(y>95){
            b=y-'a'+1;
        }
        else{
            b=y-'A'+1;
        }
       if(a==b){
            return x<y;
       }else
            return a<b;

}

int main(){
    char c[100];
    int t;
    cin>>t;
    while(t--){
        scanf("%s",&c);
        int len = strlen(c);
        sort(c,c+len,compare);
        //printf("%s\n",c);
        do{
            printf("%s\n",c);
        }
        while(next_permutation(c,c+len,compare));
    }
}
