#include<iostream>
#include<stdio.h>

using namespace std;

int arr[15][15];
int sm[15][15];
int tmp[15];

void fun(int n){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
}

int main(){
   // int n;
   // cin>>n;
   // cout<<(10+(n%10))%10<<endl;
   string an[25];
   int t,n,m,a,b;
   string s;
   cin>>t;
   cin.ignore();
   for(int y=1;y<=t;y++){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>an[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<n;j++){
                //scanf("%d",&arr[i][j]);
                arr[i][j+1] = an[i][j]-'0';
            }
        }
        cin>>m;
        for(int x=0;x<m;x++){
            cin>>s;
            if(s=="row"){
                cin>>a>>b;
                for(int k=1;k<=n;k++){
                    tmp[k]=arr[a][k];
                    arr[a][k]=arr[b][k];
                    arr[b][k]=tmp[k];
                }
            }
            else if(s=="col"){
                cin>>a>>b;
                for(int k=1;k<=n;k++){
                    tmp[k]=arr[k][a];
                    arr[k][a]=arr[k][b];
                    arr[k][b]=tmp[k];
                }
            }
            else if(s=="inc"){
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                       arr[i][j]=(arr[i][j]+1)%10;
                    }
                }
            }
            else if(s=="dec"){
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                       if(arr[i][j]>0){
                        arr[i][j]=(arr[i][j]-1)%10;
                       }
                       else {
                            arr[i][j]=9;
                       }
                    }
                }
            }
            else if(s=="transpose"){
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                       sm[i][j]=arr[i][j];
                    }
                }
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                       arr[j][i]=sm[i][j];
                    }
                }
            }

        }
        printf("Case #%d\n",y);
        for(int i=1;i<=n;i++){
            //printf("%d",arr[i][1]);
            for(int j=1;j<=n;j++){
                    printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
   }
}
