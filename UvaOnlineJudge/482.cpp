#include<iostream>
#include<stdio.h>
#include<algorithm>

using  namespace std;

int in[100001];
string s;
string ans[100001];

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        getchar();
        getline(cin,s);
        int len = s.size();
        int tmp=0;
        int dx=0;
        for(int i=0;i<len;i++){
            tmp = 0;
            while(s[i]<'0'||s[i]>'9'&&i<len) i++;
            if(i==len) break;
            int fl = 0;
            while(s[i]>='0'&&s[i]<='9'&&i<len){
                tmp = tmp*10 + (s[i]-'0');
                i++;
                fl = 1;
            }
            if(fl==0&&i==len) break;
            in[dx] = tmp;
            dx++;
        }
        //cout<<dx<<endl;
        //for(int i=0;i<dx;i++) cout<<in[i]<<endl;
        for(int i=0;i<dx;i++){
            cin>>ans[in[i]];
        }
        for(int i=1;i<=dx;i++)
            cout<<ans[i]<<endl;

        if(t!=0) printf("\n");
        cin.ignore();
    }
}
