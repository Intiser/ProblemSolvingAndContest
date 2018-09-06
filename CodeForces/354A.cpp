#include<iostream>

using namespace std;

int main(){
    int pos1,pos2;
    int x,y;
    int n;
    int key;
    int ans;
    cin>>n;
    x = 1;
    y = n;
    for(int i=0;i<n;i++){
        cin>>key;
        if(key==x){
            pos1 = i;
        }
        else if(key==y){
            pos2 = i;
        }
    }
    if(pos1<pos2){
        if((pos1-0)>(n-1-pos2)){
            pos1 = 0;
            ans  = pos2 - pos1;
        }
        else if((pos1-0)<(n-1-pos2)){
            pos2 = n-1;
            ans = pos2 - pos1;
        }
        else{
            pos2 = n-1;
            ans = pos2 - pos1;
        }
    }
    else{
        if((pos2-0)>(n-1-pos1)){
            pos2 = 0;
            ans  = pos1 - pos2;
        }
        else if((pos2-0)<(n-1-pos1)){
            pos1 = n-1;
            ans = pos1 - pos2;
        }
        else{
            pos1 = n-1;
            ans = pos1 - pos2;
        }
    }
    cout<<ans<<endl;
}
