#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>lists;
vector<int>nums;

bool check(){
    for(int i=0,j=nums.size()-1;i<nums.size();i++,j--){
        if(nums[j]!=lists[i]) return 0;
    }
    return 1;
}

void print(){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "<<lists[i]<<endl;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;

    while(getline(cin,s)){
        int siz = s.size();
        int maxm = 0;
        int tmp = 0;
        int fl = 0;
        for(int i=0;i<siz;i++){
            if(s[i]>='0'&&s[i]<='9'){
                fl = 1;
                tmp = tmp * 10 + (s[i]-'0');
            }
            else{
                lists.push_back(tmp);
                nums.push_back(tmp);
                tmp = 0;
                fl = 0;
            }
        }
        if(fl==1){
            lists.push_back(tmp);
            nums.push_back(tmp);

            tmp = 0;
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        //print();
        //cout<<lists.size()<<endl;
        for(int i=0;i<nums.size();){
            if(check()){
                cout<<"0"<<endl;
                break;
            }
            if(nums[i]==lists[0]){
                reverse(lists.begin(),lists.end()-(i));
                cout<<i+1<<" ";
                //cout<<lists[0]<<endl;
                i++;
            }
            else{
                for(int j=0;j<lists.size();j++){
                    if(lists[j]==nums[i]){
                        reverse(lists.begin(),lists.begin()+j+1);
                        cout<<j+1 <<" ";
                        //cout<<lists[0]<<endl;
                        break;
                    }
                }

            }
        }
        nums.clear();
        lists.clear();

    }
}
