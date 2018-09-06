#include<iostream>
#include<stdio.h>

using namespace std;

int arr[150];

int main(){
    string s,ans;
    int len,maxm,c;
    while(getline(cin,s)){
        len=s.size();
        maxm=0;
        for(int i=0;i<len;i++){
            if((s[i]>='a'&&s[i]<'z')||(s[i]>='A'&&s[i]<'Z')){
                c=s[i];
                arr[c]++;
                if(maxm<arr[c]) maxm=arr[c];
            }

        }
        for(int i=0;i<130;i++){
            if(arr[i]==maxm) ans.push_back(i);
            arr[i]=0;
        }
        cout<<ans<<" "<<maxm<<endl;
        ans.clear();
    }
}
