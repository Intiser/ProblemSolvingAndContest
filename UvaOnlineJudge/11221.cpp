#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int arr[10100];

 int main(){
    for(int i=1;i*i<=10000;i++){
        arr[i*i] = i;
        //cout<<i*i<<" "<<arr[i*i]<<endl;
    }
    string s;
    string usd[105];
    string tmp;
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=1;cas<=t;cas++){
        getline(cin,s);
        int len = s.size();
        int cnt = 0;
        tmp.clear();
        for(int i=0;i<len;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                cnt++;
                tmp += (s[i]);
            }
        }
        if(!arr[cnt]){
            printf("Case #%d:\n",cas);
            printf("No magic :(\n");
            //cout<<"Y"<<endl;
            continue;
        }
        int per = arr[cnt];
        int in=0;
        for(int i=0;i<per;i++){
            usd[i].clear();
            for(int j=0;j<per;j++){
                usd[i] += tmp[in];
                in++;
            }
        }
        int flag = 0;
        for(int i=0,j=per-1;i<=j;i++,j--){
            for(int k=0,l=per-1;k<per&&l>=0;l--,k++){
                if(usd[i][k]!=usd[j][l]){
                    flag = 1;
                    break;
                }
            }
            if(flag==1) break;
        }
        for(int i=0,j=per-1;i<=j;i++,j--){
            for(int k=0,l=per-1;k<per&&l>=0;l--,k++){
                if(usd[k][i]!=usd[l][j]){
                    flag = 1;
                    break;
                }
            }
            if(flag==1) break;
        }
         printf("Case #%d:\n",cas);
        if(flag==1){
            printf("No magic :(\n");
        }
        else{
            printf("%d\n",per);
        }
    }
 }
