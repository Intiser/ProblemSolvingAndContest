#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

vector<int>nums;

bool check(string s,int n){
    int siz =  s.size();
    int a = 0;
    for(int i=0;i<siz;i++){
        a = a*10 + (s[i]-'0');
        a = a%n;
    }
    //cout<<s<<" "<<n<<" "<<a<<endl;
    if(a==0) return true;
    return false;
}

int main(){
    string s;
    int n;
    int st;
    int a;
    while(cin>>n){
        for(int x=0;x<n;x++){
            cin>>s;
            cin>>st;
            nums.clear();
            for(int i=0;i<st;i++){
                cin>>a;
                nums.push_back(a);
            }
            int fl;
            int hoise = 0;
            for(int i=0;i<st;i++){
                int fl = check(s,nums[i]);
                //cout<<fl<<endl;
                if(fl==0){
                    hoise = 1;
                    break;
                }
                //cout<<fl<<endl;
            }
            //cout<<fl<<endl;
            if(hoise==1){
                cout<<s<<" - Simple."<<endl;
            }
            else{
                cout<<s<<" - Wonderful."<<endl;
            }
        }
    }
}
