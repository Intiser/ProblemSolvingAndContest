#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int flr[100];
int fld[100];
int flid[100];
int dia1[20][20];
int dia2[20][20];
int val[100][100];

vector<int>sol[1005];
vector<int>now;
int ind;

void clr(){
    for(int i=0;i<20;i++){
        flr[i] = 0;
        flid[i] = 0;
        fld[i] = 0;
    }
}

void gendia(){
    int in = 0;
    for(int i=0,j=7;j>0;j--){
        for(int c = i,r = j;c<8&&r<8;c++,r++){
            dia1[r][c] = in;
        }
        in++;
    }
    for(int i=0,j=0;i<8;i++){
        for(int c = i,r = j;c<8&&r<8;c++,r++){
            dia1[r][c] = in;
        }
        in++;
    }
     in = 0;
    for(int i=7,j=7;j>0;j--){
        for(int c = i,r = j;c>=0&&r<8;c--,r++){
            dia2[r][c] = in;
        }
        in++;
    }
    for(int i=0,j=7;j>=0;j--){
        for(int c = i,r = j;r>=0&&c<8;c++,r--){
            dia2[c][r] = in;
        }
        in++;
    }

}



void check(){
   // for(int i=0;i<8;i++){
        for(int j=0;j<now.size();j++) cout<<now[j]<<" ";
        cout<<endl;
   // }
   /* for(int i=0;i<8;i++){
        for(int j=0;j<8;j++) cout<<dia2[i][j]<<" ";
        cout<<endl;
    }*/
}

void spot(int r,int c){
    flr[r] = 1;
    fld[dia1[r][c]] = 1;
    flid[dia2[r][c]] = 1;
    now.push_back(r);
}

int checker(int r,int c){
        if(flr[r]) return 0;
        if(fld[dia1[r][c]]) return 0;
        if(flid[dia2[r][c]]) return 0;
        spot(r,c);
        return 1;
}



int eras(int r,int c){
    flr[r] = 0;
    fld[dia1[r][c]] = 0;
    flid[dia2[r][c]] = 0;
    now.pop_back();
}

void result(int r,int c){
    if(c==7){
        sol[ind] = now;
        //check();
        ind++;
        return;
    }
    //cout<<r<<" "<<c<<endl;
    for(int i=0;i<8;i++){
        if(checker(i,c+1)){
            result(i,c+1);
            eras(i,c+1);
        }
    }

}

void backt(){
    for(int i=0;i<8;i++){
        spot(i,0);
        result(i,0);
        eras(i,0);

    }
    //cout<<ind<<endl;
}

int retu(int n){
    int ret = 0;
    for(int i=0;i<8;i++){
        ret = ret +  val[sol[n][i]][i];
    }
    return ret;
}

int finally(){
    int maxm = 0;
    int r;
    for(int i=0;i<ind;i++){
        r = retu(i);
        if(r>maxm) maxm = r;
    }
    return maxm;
}

int main(){
    gendia();
    backt();
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                cin>>val[i][j];
        printf("%5d\n",finally());
    }
   // check();
}
