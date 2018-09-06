#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int arr[110];

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int n,tot,cnt,rst;
    double pi,rat,tmp;
    while(cin>>n){
        if(n==0) break;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);

        tot=0; cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                     tot++;
                    rst=gcd(arr[i],arr[j]);
                    if(rst==1) cnt++;

            }
        }
        if(cnt==0){
            //rat= double(cnt)/double(tot);
            //tmp= double(6)*double(tot)/double(n);

             printf("No estimate for this data set.\n");
        }
        else{
           pi = sqrt(double(6.0)*double(tot)/double(cnt));
            printf("%.6lf\n",pi);
        }
    }
}
