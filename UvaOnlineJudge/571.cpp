#include<iostream>
#include<stdio.h>
#include<vector>


using namespace std;

string s[7]={ "fill A", "fill B" , "empty A" , "empty B","pour A B" , "pour B A" , "success" };
vector<string>ans;
int flag;
int A,B;

void rec(int a,int b,int sc,int t){
    if(sc==0){
        if(a==A) return ;
        a = A;
    }
    else if(sc == 1){
        if(b==B) return;
        b = B;
    }
    else if(sc == 2){
        if(a==0) return;
        a = 0;
    }
    else if(sc == 3){
        if(b==0) return ;
        b = 0;
    }
    else if(sc == 4){
        while(b<=B&&a>0){
            a--;
            b++;
        }

    }
    else if(sc == 5 ){
        while(a<=A&&b>0){
            b--;
            a++;
        }
    }
    if(b==t) {
        flag = 1;
        ans.push_back(s[6]);
        return ;
    }
    cout<<s[sc]<<endl;
    cout<<a<<" "<<b<<endl;
    if(a==0&&b==0) return;
    if(a==A&&b==B) return;
    if((A+B)- (a+b) < t) return ;
    for(int i=0;i<6;i++){
        ans.push_back(s[i]);
        rec(a,b,i,t);
        if(flag==1) return ;
        ans.pop_back();
    }
    return ;

}

void result(int c){
   rec(0,0,0,c);
   ans.push_back(s[0]);
   ans.pop_back();
   if(flag==1) return ;
   rec(0,0,1,c);
   ans.push_back(s[1]);
}

void print(){
    int siz = ans.size();
    for(int i=0;i<siz;i++){
        cout<<ans[i]<<endl;
    }
}

int main(){
    int c;
    while(cin>>A>>B>>c){
        ans.clear();
        result(c);
        print();
    }
}
