#include<iostream>
#include<stdio.h>

using namespace std;

int arr[35];

int main(){
    int n,cnt,match;
    int len1,len2;
    string wrd;
    string in;
    while(cin>>n){
            if(n==-1)
            break;


        cin>>wrd;
        cin>>in;
        cin.ignore();

        //cout<<n<<wrd<<in<<endl;
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

            for(int j=0;j<31;j++) arr[j]=0;

    }
}
