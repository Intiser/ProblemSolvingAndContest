#include<iostream>
#include<stdio.h>

using namespace std;

int arr[130];
int word[130];

int main(){
    string s[1050];
    string puz;
    int len1,len2,in=0,fl;
    while(cin>>s[in]){
        if(s[in]=="#") break;
        in++;
    }
    cin.ignore();
    while(getline(cin,puz)){
            if(puz=="#") break;
        len1 = puz.size();
        int cnt=0;
        for(int i=0;i<len1;i++){
            if(puz[i]>='a'&&puz[i]<='z')
            arr[puz[i]]++;
        }
        for(int i=0;i<in;i++){
            len2 = s[i].size(); fl=0;
            for(int j=0;j<len2;j++){
                word[s[i][j]]++;
                if(arr[s[i][j]]&&word[s[i][j]]<=arr[s[i][j]]){
                    ;
                }
                else{
                    fl=1;
                    break;
                }
            }
            if(fl==0) cnt++;
            for(int j=0;j<130;j++) word[j]=0;

        }
        cout<<cnt<<endl;
        puz.clear();
        for(int i=0;i<130;i++) arr[i] = 0;
    }
}
