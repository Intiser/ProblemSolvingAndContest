#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int arr[1000];

int main(){
    long long int n,m,x,y,flag,q,in;
    double p;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n>>m){
        x=n; y=m; flag=0;
        p=log(x)/log(y);
        q=floor(p);
        p=pow(y,q);
        //cout<<q<<" "<<p<<endl;
        if(n<2||m<2||m>n){
           printf("Boring!\n");
        }
        else{
                  int j=n; flag=0; arr[0]=n;  in=1;
            while(j>1&&flag==0){
                //printf("%d ",j);
                if(j%m!=0) flag=1;
                j=j/m;
                arr[in]=j;
                in++;
            }
           // arr[in]=j;
            if(flag==1) printf("Boring!\n");
            else {
                for(int i=0;i<in-1;i++){
                    printf("%d ",arr[i]);
                }
               printf("%d\n",arr[in-1]);
            }
            //printf("%d\n",j);
        }
    }
}
