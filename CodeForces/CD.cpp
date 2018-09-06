#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int m[1000000];
char  str[110000];

void init(int in,int st,int en){
    if(st==en){
        m[in] = 0;
        return;
    }
    int mid = (st+en)/2;
    init(in*2,st,mid);
    init(in*2+1,mid+1,en);
    m[in] = 0;
}

void update(int in,int st,int en,int i,int j){
    if(i>en||j<st) return;
    if(st>=i&&j>=en){
        m[in]++;
        return;
    }
    int mid = (st+en)/2;
    update(in*2,st,mid,i,j);
    update(in*2+1,mid+1,en,i,j);

}

int query(int in,int st,int en,int x){
    if(x>en||x<st) return 0;
    if(st==x&&en==x) return m[in];
    int mid = (st+en) / 2;
    int t1 = query(in*2,st,mid,x);
    int t2 = query(in*2+1,mid+1,en,x);
    int tt = t1 + t2 + m[in];
    return tt;
}

int main(){
    int t;
    int n;
    int x,y;
    char ch;
    char ans;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%s",&str);
        int len = strlen(str);
        init(1,1,len);
        scanf("%d",&n);
        printf("Case %d:\n",cas);
        for(int i=0;i<n;i++){
            getchar();
            scanf("%c",&ch);
            //cin>>ch;
            if(ch=='I'){
                scanf(" %d %d",&x,&y);
                update(1,1,len,x,y);
            }
            else if(ch=='Q'){
                scanf(" %d",&x);
                int cg = query(1,1,len,x);
                if(cg%2==1&&str[x-1]=='0'){
                        ans = '1';
                }
                else if(cg%2==1&&str[x-1]=='1'){
                    ans = '0';
                }
                else
                    ans = str[x-1];
                printf("%c\n",ans);
            }
        }

    }
}
