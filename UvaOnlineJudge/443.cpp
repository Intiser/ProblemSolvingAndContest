#include<bits/stdc++.h>

using namespace std;

long long int arr[6500];
//map<int,int> flag;

int main(){
    int len=1;
    arr[1]=1;
    long long int a,b,c,d;
    long long int tot;
    a=1;
    for(int i=0;;i++){

        if(i!=0) a=a*2;
        if(a<0||a>2000000000) break;
        b=1;
        for(int j=0;;j++){

            if(j!=0) b=b*3;
            if(b<0||b>2000000000) break;
            c=1;
            for(int k=0;;k++){
            if(d<0&&d>2000000000) break;
                if(k!=0) c=c*5;
                if(c<0||c>2000000000) break;
                d=1;
                for(int l=0;;l++){

                    if(l!=0) d=d*7;
                    if(d<0||d>2000000000) break;
                    tot=a*b*c*d;
                    if(tot<0||tot>2000000000) break;

                    arr[len]=tot;
                    len++;
                }
            }
        }
    }
    //cout<<len<<endl;
    sort(arr+1,arr+len);
    int n;
    while(cin>>n){
        if(n==0) break;
        if(n%10==1&&n%100!=11){
            printf("The %dst humble number is %lld.\n",n,arr[n]);
        }
        else if(n%10==2&&n%100!=12){
            printf("The %dnd humble number is %lld.\n",n,arr[n]);
        }
        else if(n%10==3&&n%100!=13){
            printf("The %drd humble number is %lld.\n",n,arr[n]);
        }
        else{
            printf("The %dth humble number is %lld.\n",n,arr[n]);
        }
    }
}
