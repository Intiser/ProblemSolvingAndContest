/***********Template Starts Here***********/
#include <bits/stdc++.h>


using namespace std;

#define ahsan0045

pair<int,int> arr[101];
int n;
int w;
int k;
int mod;
int f[105];
int ff[105];
int dot[105];
int sum[105];


int main(){
    #ifdef ahsan0045
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    int t;

    //mod = 100000007;


    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d %d %d",&n,&w,&k);
        for(int i=0;i<n;i++){
            scanf("%d %d",&arr[i].second,&arr[i].first);
        }
        memset(sum,0,sizeof(sum));
        memset(dot,0,sizeof(dot));
        memset(f,0,sizeof(f));
        sort(arr,arr+n);
        int st = 0;
        int mcnt = 0;
        int mm = 0;
        for(int i=0;i<n;i++){
            st = i;
            while(arr[st].first <= arr[i].first + w && st < n){
                f[i]++;
                ff[i]++;
                st++;
            }


        }
        for(int x=0;x<mcnt;x++){
            for(int j=0;j<k;j++){
                int mxm = 0;
                int in = 0;
                for(int i=0;i<n;i++){
                    if(f[i]-sum[i]>mxm ) {
                        mxm = f[i]-sum[i]; in = i;
                    }
                }
                //f[in] = 0;
                //cout<<in<<" # "<<f[in]<<endl;
                for(int i=in;i<in+f[in];i++){
                    dot[i] = 1;
                }
                f[in] = 0;
                sum[n-1] = dot[n-1];
                for(int i=n-2;i>=0;i--){
                    if(dot[i])
                    sum[i] = sum[i+1] + dot[i];
                    else
                    sum[i] = 0;
                }

            }
        }
        //for(int i=0;i<n;i++) cout<<i<<" "<<dot[i]<<endl;
        int cnt = 0;
        for(int i=0;i<n;i++) if(dot[i]) cnt++;
        //int mx = 0;
        //for(int i=0;i<n;i++) mx = max(mx,dp[k-1][i]);
        printf("Case %d: %d\n",cas,cnt);

    }

}






