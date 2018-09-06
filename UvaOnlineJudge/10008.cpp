#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

pair<int,int>arr[30];

/*bool cmp(int a,int b){
    return a>b;
}*/

int main(){
    //freopen("out.txt","w",stdout);
     string s;
    int t,len,c;
   cin>>t;{
    cin.ignore();
     for(int i=0;i<30;i++) {arr[i].second=i; arr[i].first=0;}
    while(t--){
        getline(cin,s);
        len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]>='A'&&s[i]<='Z') {
                c=s[i]-'A';
                arr[c].first++;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                c=s[i]-'a';
                arr[c].first++;
            }
        }

    }
    sort(arr,arr+28);
    for(int i=0;i<28;i++){
        for(int j=0;j<28;j++){
            if(arr[j+1].first==arr[j].first&&arr[j].second<arr[j+1].second) swap(arr[j],arr[j+1]);
        }
    }
        for(int i=27;i>=0;i--){
           if(arr[i].first) printf("%c %d\n",arr[i].second+65,arr[i].first);
        }

   }
}
