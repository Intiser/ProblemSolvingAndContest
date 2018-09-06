#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli arr[200][200];

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int t;
    int n;
    string s;
    char c[10],a[10];
    cin>>t;
    //cin.ignore();
    for(lli cas=0;cas<t;cas++){
        scanf("%s%s%d",&c,&a,&n);
        int fl = 0;
        //cout<<"Y"<<endl;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++){
                scanf("%lld",&arr[i][j]);
                if(arr[i][j]<0) fl = 1;
            }
        //cout<<"Y"<<endl;
        if(fl==0)
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j]!=arr[(n)-(i)+1][n-(j)+1]){
                        fl = 1;
                }
            }

        }
        if(fl==0){
            printf("Test #%lld: Symmetric.\n",cas+1);
        }
        else{
            printf("Test #%lld: Non-symmetric.\n",cas+1);
        }
        //getchar();

    }
}
