#include<iostream>
#include<stdio.h>

using namespace std;

int arr[30],brr[30];

int main(){
    string a,b,ans;
    int c,len;
    while(getline(cin,a)){
        //cin>>a;
        //cin>>b;
        getline(cin,b);
        len=a.size();
        for(int i=0;i<len;i++){
            c=a[i]-'a';
            //if(!arr[c])
            arr[c]++;
        }

         len=b.size();
        for(int i=0;i<len;i++){
            c=b[i]-'a';
            //if(arr[c]==1)
            brr[c]++;
        }


        for(int i=0;i<30;i++){
            while(arr[i]>0&&brr[i]>0){
                ans.push_back(i+97);
                arr[i]--; brr[i]--;
            }
            arr[i]=0;
            brr[i]=0;
        }
        cout<<ans<<endl;
        ans.clear();

    }
}
