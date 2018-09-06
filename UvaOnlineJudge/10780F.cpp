#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int flag[10050];
int prime[10050];
int index[10050];
int in;
int arr[10050][1500];
vector<int> nums;
vector<int> pows;

void sieve(){
    in = 1;
    flag[0] = 1;
    flag[1] = 1;
    prime[0] = 2;
    for(int i=4;i<=10000;i=i+2) flag[i]++;
    for(int i=3;i<=10000;i=i+2){
        if(!flag[i]){
            prime[in] = i;
            index[i]  = in;
            in++;
            for(int j=i+i;j<=10000;j=j+i)
                flag[j]++;
        }
    }
    //cout<<in<<endl;
    //cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;
}

void prefact(int n){
    int t = n;
    for(int i=0;prime[i]*prime[i]<=n&&i<in;i++){
        if(n%prime[i]==0){
            int cnt = 0;
            int num = index[prime[i]];
            while(n%prime[i]==0){
                n = n/prime[i];
                cnt++;
               // cout<<prime[i]<<" ";
            }
            arr[t][num] = cnt ;
        }
    }
    if(n>1) {
        arr[t][index[n]] = 1 ;
       // cout<<n;
    }
    //cout<<endl;
}

void fact(int n){
    nums.clear();
    pows.clear();
    int t = n;
    for(int i=0;prime[i]*prime[i]<=n&&i<in;i++){
        if(n%prime[i]==0){
            nums.push_back(prime[i]);
            int cnt = 0;
            while(n%prime[i]==0){
                n = n/prime[i]; cnt++;
               // cout<<prime[i]<<" ";
            }
            pows.push_back(cnt);
        }
    }
    if(n>1) {
       nums.push_back(n);
       pows.push_back(1);
    }
    //cout<<endl;
}

void all(){
    for(int i=2;i<=10000;i++){
        prefact(i);
        //cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<" "<<arr[i][3]<<endl;
    }
    //cout<<"test"<<endl;
    int last;
    for(int i=2;i<=10000;i++){
        if(!flag[i]){
            last = index[i];
        }
        for(int j=0;j<=last;j++){
            arr[i][j] = arr[i][j] + arr[i-1][j];
        }
        //cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<" "<<arr[i][3]<<endl;
    }
    /*for(int i=2;i<11;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<" "<<arr[i][3]<<endl;
    }*/
}

int result(int n){
    int mn = 10001;
    int siz = nums.size();
    for(int i=0;i<siz;i++){
        int pos = index[nums[i]];
        int d = arr[n][pos] / pows[i];
        if(d<mn) mn = d;
    }
    return mn;
}

int main(){
    sieve();
    all();
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int n,m,t;
    int ans;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>m;
        fact(n);
        //cout<<result(m)<<endl;
        ans = result(m);
         cout<<"Case "<<cas<<":"<<endl;
        if(ans)
            cout<<ans<<endl;
        else
            cout<<"Impossible to divide"<<endl;
    }
}
