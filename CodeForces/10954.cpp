#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<queue>

using namespace std;

#define lli long long int

lli arr[100010];

priority_queue<lli, vector<lli>,greater<lli> >pq;

int main(){
     lli n,tot,tmp,a;
     while(cin>>n){
        if(n==0) break;
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            pq.push(a);
        }
        //sort(arr,arr+n);
        /*tot = arr[0] + arr[1];
        tmp = tot;
        for(int i=2;i<n;i++){
            tot = tot + arr[i];
            tmp = tmp + tot ;
            //tmp = tot;
        }*/
        tmp = 0;
        tot = pq.top();
        pq.pop();
        tot = tot + pq.top();
        pq.pop();
        tmp = tot;
        pq.push(tot);
        while(pq.size()>1){
           tot = pq.top();
            pq.pop();
            //cout<<tot<<endl;
            tot = tot + pq.top();
            pq.pop();
            //cout<<tot<<endl;
            tmp += tot;
            pq.push(tot);
        }
        cout<<tmp<<endl;
        while(!pq.empty()) pq.pop();

     }
}
