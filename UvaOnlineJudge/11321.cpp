#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
#define llI long long int

pair<llI,llI> arr[10010];

bool compare(const pair<llI,llI> &lhs, const pair<llI,llI> &rhs)
{
    if(lhs.first != rhs.first)
    return lhs.first < rhs.first;
    else{
        llI x,y;
        x = lhs.second;
        y = rhs.second;
        if(abs(x%2)==1&&abs(y%2)==0){
            return true;
        }
        else if(abs(x%2)==0&&abs(y%2)==1){
            return false;
        }
        else if(abs(x%2)==0&&abs(y%2)==0){
            return x<y;
        }
        else{
            return  x>y;
        }
    }
}

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m;
    while(cin>>n>>m){
        cout<<n<<" "<<m<<endl;
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i].second);
            arr[i].first = arr[i].second%m;
        }
        sort(arr,arr+n,compare);

        for(int i=0;i<n;i++){
            printf("%lld\n",arr[i].second);
        }

    }
}
