#include<iostream>
#include<stdio.h>

using namespace std;

long long int Array[500005];
long long int newarr[500005];
long long int cnt;


void sorting(int p,int q,int r){
   int i,j,l;
   //newarr=new int[sizeArray];
   i=p;
   j=q+1;
   l=p;

   while(i<=q&&j<=r){
       if(Array[i]<=Array[j]&&i<=q){
           newarr[l]=Array[i];
           l++;
           i++;
           //cnt+=(l-i);
       }
       else if(Array[j]<Array[i]&&j<=r){
           newarr[l]=Array[j];
           l++;
           j++;
           cnt+=(j-l);

       }
   }

         if(j>r){
            while(i<=q){
                newarr[l]=Array[i];
                l++;
                i++;
            }
         }
         else if(i>q){
             while(j<=r){
                newarr[l]=Array[j];
                l++;
                j++;
               // cnt++;
            }
        }




   for(i=p;i<=r;i++){
         Array[i]=newarr[i];
      //  printf("%d\n",Array[i]);
     }
}
void mergesrt(int a, int b){
    int m;
    //cout<<" yes"<<cnt<<endl;
    if(a==b)
        return ;
    else{
        m=(a+b)/2;
        mergesrt(a,m);
        mergesrt(m+1,b);
        sorting(a,m,b);
    }
}

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        for(int i=1;i<=n;i++){
            scanf("%lld",&Array[i]);
        }
        cnt=0;
        mergesrt(1,n);
        if(cnt%2==1){
            cout<<"Marcelo"<<endl;
        }
        else{
            cout<<"Carlos"<<endl;
        }
    }
}
