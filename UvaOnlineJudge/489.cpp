#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int n,cnt,match;
    int arr[30],len1,len2;
    string wrd;
    string in;
    while(cin>>n){
            if(n==-1)break;

            for(int j=0;j<31;j++) arr[j]=0;

            cin>>wrd;//cout<<arr[0]<<endl;
            cin.ignore();
            cin>>in;
            //cin.ignore();
            cout<<arr[0]<<endl;
            len1=wrd.size();
            len2=in.size();
            match=len1;
            cnt=0;

            for(int i=0;i<len1;i++){
                arr[wrd[i]%97]++;
            }
            for(int i=0;i<len2;i++){
                  if(arr[in[i]%97]>0){
                        //int k=in[i]%97;
                        match=match-arr[in[i]%97];
                        arr[in[i]%97]=-1;}
                else if(arr[in[i]%97]==0)
                        cnt++;

                if(match==0||cnt==7) break;
            }

            printf("Round %d\n",n);
            if(match==0){
                printf("You win.\n");
            }
            else if(cnt==7){
                 printf("You lose.\n");
            }
            else {
                 printf("You chickened out.\n");
            }

    }
}
