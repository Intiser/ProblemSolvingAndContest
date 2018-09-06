#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int m,x,ini,ans,fl,st,frst,inter;
    while(cin>>m>>x){
        if(m==0&&x==0) break;
        if(x==0||x==100||m==1){
            printf("Not found\n");
            continue;
        }

        ans=(100*(m-1)*1)/(100-x);

        if((100*(m-1))%(100-x)==0)
            ans--;

        if(ans<m){
            printf("Not found\n");
        }
        else{
            cout<<ans<<endl;
        }
    }
}
