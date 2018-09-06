#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int chk[15];
int flag[15];

string genString(int n){
    string s;
    while(n/10){
        s.push_back('0' + n%10);
        n = n/10;
    }
     s.push_back('0' + n%10);
    while(s.size()<5){
         s.push_back('0' );
    }
    reverse(s.begin(),s.end());
    return s;
}

void clr(int arr[]){
    for(int i=0;i<10;i++) arr[i] = 0;
}

int indi(string s){
    clr(chk);
    int l = s.size();
    for(int i=0;i<l;i++){
        chk[s[i]-'0']++;
        flag[s[i]-'0']++;
        if(chk[s[i]-'0']>1) return 0;
    }
    return 1;
}

int flcheck(){
     for(int i=0;i<10;i++){
       // cout<<i<<" "<<flag[i]<<" "<<endl;
        if(flag[i]>1||flag[i]==0) return 0;
     }
     return 1;
}

int result(int n){
    string a,b;
    int c = 0;

    for(int i=1;i*n<99999;i++){
        clr(flag);
        a = genString(i);
        if(indi(a)){

            b = genString(i*n);
            if(indi(b)){
                if(flcheck()){
                    cout<<b<<" / "<<a<<" = "<<n<<endl;
                    c++;
                }
                //clr(flag);

            }
        }
    }
    if(c) return 1;
    return 0;
}

int main(){
    int n,ans;
    int st = 0;
    while(cin>>n){
        if(n==0) break;
        if(st) printf("\n");
        st++;
        ans = result(n);
        if(ans==0) printf("There are no solutions for %d.\n",n);
    }

}
