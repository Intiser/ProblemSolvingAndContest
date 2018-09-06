#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int t,a[10];
    double tot;
    cin>>t;
    for(int i=1;i<=t;i++){
            tot=0;
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
        tot=a[0]+a[1]+a[2]+a[3];

        sort(a+4,a+7);
        tot+=((a[5]+a[6])/2.0);

        if(tot>=90){
            printf("Case %d: A\n",i);
        }
        else if(tot>=80){
            printf("Case %d: B\n",i);
        }
        else if(tot>=70){
            printf("Case %d: C\n",i);
        }
        else if(tot>=60){
            printf("Case %d: D\n",i);
        }
        else {
            printf("Case %d: F\n",i);
        }
    }
}
