#include<iostream>
#include<stdio.h>

using namespace std;

int arr[100][100];
int tmp=0,maxm=0,t;

int main(){
    string s[100];
    int tc,len;
    cin>>tc;
    cin.ignore();
    while(tc--){
        //getline(cin,s[0]);
        cin>>s[0];
        len=s[0].size();
        for(int i=1;i<len;i++){
            //getline(cin,s[i]);
            cin>>s[i];
        }

        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(i==0){
                    if(s[i][j]=='1'){
                        arr[i][j]=1;
                    }else{
                        arr[i][j]=0;
                    }
                }
                else{
                    if(s[i][j]=='1'){
                        arr[i][j]=1+arr[i-1][j];
                    }else{
                        arr[i][j]=0;
                    }
                }
            }
        }
        /*for(int i=0;i<len;i++){
            for(int j=0;j<len;j++)
                printf("%d ",arr[i][j]);
            printf("\n");
        }*/
         tmp=0,maxm=0,t;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                tmp=arr[i][j];
                t=j+1;
                while(t<len&&arr[i][t]>=arr[i][j]){
                    tmp+=arr[i][j];
                    t++;
                }
                t=j-1;
                while(t>=0&&arr[i][t]>=arr[i][j]){
                    tmp+=arr[i][j];
                    t--;
                }

                if(maxm<tmp) maxm=tmp;
            }
        }
        cout<<maxm<<endl;
        if(tc!=0) cout<<endl;
        //cin.ignore();
    }
}
