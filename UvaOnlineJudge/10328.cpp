// unsolved 10328 uva
// mistake in understanding but the class of adding will help

#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli unsigned long long int

string arr[150][150];

string add(string a,string b){
    int l1 = a.size();
    int l2 = b.size();
    string res;

        int c = 0,i,j;
        for(i=0, j=0;i<l1&&j<l2;i++,j++){
            int n1 = a[i] - '0';
            int n2 = b[j] - '0';
            res.push_back((c+n1+n2)%10 + '0');
            c = (c+n1+n2)/10;
        }
        if(i==l1&&j==l2&&c){
            res.push_back(c+ '0');
            c = 0;
        }
        else if(j==l2){
            while(i<l1){
                int n1 = a[i] - '0';
                res.push_back((n1+c)%10 + '0');
                c = (c+n1)/10;
                i++;
            }
        }
        else if(i==l1){
            while(j<l2){
                int n1 = b[j] - '0';
                res.push_back((n1+c)%10 + '0');
                c = (c+n1)/10;
                j++;
            }
        }

        if(c>0) res.push_back(c + '0');

        return res;

}

int main(){
   // different issue
   //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

   arr[1][0] = "1";
    arr[1][1] = "1";
    for(int i=2;i<=100;i++){
        for(int j=0;j<=i;j++){
            if(j==0) arr[i][j] = "1";
            else arr[i][j] = add(arr[i-1][j-1], arr[i-1][j]);
            //cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }
    //cout<<arr[100][50]<<" "<<arr[100][25]<<" "<<arr[100][75]<<endl;



   // 713
   /*
    string s,t,ans;
    int ts;
    cin>>ts;
    while(ts--){
        cin>>s>>t;
       // reverse(s.begin(),s.end());
       // reverse(t.begin(),t.end());
            ans = add(s,t);
        //reverse(ans.begin(),ans.end());
        int st = 0;
        for(st = 0;st<ans.size();st++){
                if(ans[st]!='0') break;
        }
        ans = ans.substr(st,ans.size()-st);
        cout<<ans<<endl;
    }
    */
    // Uva 713 finished here

    int n,k;
    string ans;
    while(cin>>n>>k){
        if(n==k){
            cout<<1<<endl;
        }
        int k1 = n-k;
        //int mn = min(k,k1);
        ans = arr[n][0];
        for(int i=1;i<=k1;i++){
            ans = add(ans,arr[n][i]);
        }

        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
