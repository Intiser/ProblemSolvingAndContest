#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int a;

int main(){
    long long int n,b,m,c,tot1,tot2,t;
    cin>>n>>b;
    t=n-1; tot1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        tot1=tot1*b+a;
        t--;
    }
    cin>>m>>c;
    t=m-1; tot2=0;
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        tot2=tot2*c+a;
        t--;
    }
    if(tot1==tot2) printf("=\n");
    else if(tot1>tot2) printf(">\n");
    else  printf("<\n");
}
