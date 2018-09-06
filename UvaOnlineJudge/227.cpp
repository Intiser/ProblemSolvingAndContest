#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

string s[10],ins;
char c[10][10];
int posX,posY;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
map<char,int> indi;

void indicator(){
    indi['A'] = 0;
    indi['B'] = 1;
    indi['L'] = 2;
    indi['R'] = 3;
}

void conv(){
    int siz = s[0].size();
    for(int i=0;i<5;i++){
        siz = s[i].size();
        if(siz==4) s[i].push_back(' ');
        for(int j=0;j<5;j++){
            c[i][j] = s[i][j];
            if(s[i][j]==' '){
                posX = i;
                posY = j;
            }
        }
    }
}

bool action(char ch){
    int pos = indi[ch];
    int dX  = dx[pos];
    int dY  = dy[pos];
    if(posX+dX<0||posX+dX==5) return false;
    if(posY+dY<0||posY+dY==5) return false;
    int newX = posX+dX;
    int newY = posY+dY;
    char t;
    t = c[newX][newY];
    c[newX][newY] = c[posX][posY];
    c[posX][posY] = t;
    posX = newX;
    posY = newY;
    return true;
}

bool result(){
    int siz = ins.size();
    bool ok;
    for(int i=0;i<siz;i++){
        if(ins[i]!='A'&&ins[i]!='B'&&ins[i]!='L'&&ins[i]!='R'&&ins[i]!='0') return false;
        if(ins[i]=='0') break;
        ok = action(ins[i]);
        if(ok==false) return false;
    }
    return true;
}

void print(){
    for(int i=0;i<5;i++){
        cout<<c[i][0];
        for(int j=1;j<5;j++){
            cout<<" "<<c[i][j];
        }
        cout<<endl;
    }
}

bool ochecker(string t){
    int l = t.size();
    for(int i=0;i<l;i++){
        if(t[i]=='0') return true;
    }
    return false;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string t;
    indicator();
    bool status;
    int in,sizr;
    int puz=1;
    while(getline(cin,s[0])){
        sizr = s[0].size();
        if(sizr == 1 &&s[0][0]=='Z') break;
        getline(cin,s[1]);
        getline(cin,s[2]);
        getline(cin,s[3]);
        getline(cin,s[4]);
        ins = "";
        while(getline(cin,t)){
            ins  = ins + t;
            if(ochecker(t)==true) break;
        }
        conv();
        status = result();
        if(puz>1) printf("\n");
        cout<<"Puzzle #"<<puz<<":"<<endl;
        if(status==true){
            print();
        }
        else{
            cout<<"This puzzle has no final configuration."<<endl;
        }

        puz++;
    }
}
