#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    int t;
    int n;
    double prb;
    int pl;
    cin>>t;
    while(t--){
        cin>>n>>prb>>pl;
        int vl = floor(1.0/prb);
        double tmp = 1.0;
        double div ;
        double ans ;

        for(int i=1;i<=pl&&i<n;i++){
            div = ( (vl-1)*n + i);
            //cout<<div<<endl;
            //cout<<vl*n<<endl;
            ans = (vl*1.0) / div;
            tmp = tmp - ans;
            //cout<<tmp<<endl;
        }
        if(n==pl)
        ans = tmp;
        printf("%.4lf\n",ans);
    }
}
