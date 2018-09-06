#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

string s,ans;


int fl[150];
int len;

void funct(int l){
    if(l==0){
        cout<<ans<<endl;
        return ;
    }

    for(int i=0;i<len;i++){
        if(fl[i]==0){
            fl[i]=1;
            ans.push_back(s[i]);
            funct(l-1);
            //cout<<ans<<endl;
            int l = ans.size();
            ans.erase(l-1,1);
            fl[i]=0;
            //cout<<ans<<endl;
        }
    }
}


int main(){
    char sc[100];
    int t;
    cin>>t;
    while(t--){
        scanf("%s",&sc);
        len = strlen(sc);
        sort(sc,sc+len);
        do{
           printf("%s\n",sc);
        }while(next_permutation(sc,sc+len));
        printf("\n");
    }
}
