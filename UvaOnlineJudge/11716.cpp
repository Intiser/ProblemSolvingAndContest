#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

char c[105][105];

int main(){
    string s,ans;
    int t,len,n,tmp,in;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        len=s.size();
        ans.clear();
        n=floor(sqrt((len*1.0)));
        if(n*n==len){
            in=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    c[i][j]=s[in]; in++;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans.push_back(c[j][i]);
                }
            }
            cout<<ans<<endl;
            s.clear();

        }
        else{
            printf("INVALID\n");
        }
    }
}
