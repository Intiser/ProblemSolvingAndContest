#include<iostream>

using namespace std;

int arr[10][50];
int pw[11];
int n,t;

void add(int i,int j){

    if(arr[i][j]!=pw[i]){

        return;
    }
    if(i==n) return;
    add(i+1,j);
    add(i+1,j+1);
}

void print(){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int result(){
    for(int i=0;i<t;i++){
        add(1,1);
    }
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(arr[i][j]==i){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    pw[1] = 1;
    for(int i=2;i<=10;i++){
        pw[i] = pw[i-1]*2;
    }
    cin>>n>>t;
    cout<<result()<<endl;
    print();

}
