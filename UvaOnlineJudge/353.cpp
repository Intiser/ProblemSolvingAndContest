#include<bits/stdc++.h>
#include<string>

using namespace std;

int palin(string a){
    int l = a.size();
    for(int i=0,j=l-1;i<=j;i++,j--){
        if(a[i]!=a[j])
            return -1;
    }
    return 1;
}

int main(){
    string s,tmp;

    while(cin>>s){
        int len = s.size();
        int cnt = 0;
        int res,in=0;
        map<string,int> m;
        string ans[2000];
        for(int i=1;i<=len;i++){
            for(int j=0;j<len;j++){
                tmp = s.substr(j,i);
                if(m[tmp]!=1){
                    res = palin(tmp);
                    //cout<<res<<" "<<tmp<<endl;
                    if(res==1){
                        cnt++;
                        m[tmp]=1;
                        ans[in]= tmp;
                        in++;
                    }
                }


            }
        }
        //cout<<cnt<<endl;
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes."<<endl;

    }
}
