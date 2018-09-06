#include<iostream>
#include<stdio.h>

using namespace std;

int arr[11];

int main()
{
    int t,n,m,i,j,k,a[100000],term,c,lm;


    while(cin>>n){

        if(n==0) break;

    lm=n;

        a[0]=1;
        m=1;

        for(j=1,c=0;j<=n;j++){
            for(k=0;k<m;k++){
               term=(a[k]*j+c);
                c=term/10;
               a[k]=term%10;
            }
            while(c>0){
               a[m]=c%10;
               c=c/10;
               m++;
            }


        }
        //cout<<lm;
        //cout<<"!"<<endl;
        for(k=m-1;k>=0;k--){
            //cout<<a[k];
            arr[a[k]]++;
        }
        //cout<<endl;
        printf("%d! --\n",n);
        printf("   (0)%5d",arr[0]);
        printf("   (1)%5d",arr[1]);
        printf("   (2)%5d",arr[2]);
        printf("   (3)%5d",arr[3]);
        printf("   (4)%5d\n",arr[4]);
        printf("   (5)%5d",arr[5]);
        printf("   (6)%5d",arr[6]);
        printf("   (7)%5d",arr[7]);
        printf("   (8)%5d",arr[8]);
        printf("   (9)%5d\n",arr[9]);
        for(int x=0;x<10;x++) arr[x]=0;

    }

}
