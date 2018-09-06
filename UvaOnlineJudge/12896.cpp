#include<iostream>
#include<stdio.h>

using namespace std;

char c[15][10];
int arr[150];
int val[150];
string s;

void ok(int x,int y){
    s.push_back(c[x][y]);
}

int main(){
c[0][0] = ' ';
c[1][0] = '.';
c[1][1] = ',';
c[1][2] = '\?';
c[1][3] = '\"';
c[2][0] = 'a';
c[2][1] = 'b';
c[2][2] = 'c';
c[3][0] = 'd';
c[3][1] = 'e';
c[3][2] = 'f';
c[4][0] = 'g';
c[4][1] = 'h';
c[4][2] = 'i';
c[5][0] = 'j';
c[5][1] = 'k';
c[5][2] = 'l';
c[6][0] = 'm';
c[6][1] = 'n';
c[6][2] = 'o';
c[7][0] = 'p';
c[7][1] = 'q';
c[7][2] = 'r';
c[7][3] = 's';
c[8][0] = 't';
c[8][1] = 'u';
c[8][2] = 'v';
c[9][0] = 'w';
c[9][1] = 'x';
c[9][2] = 'y';
c[9][3] = 'z';

    int t;
    int n;
    int a;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
            cin>>n;
            for(int i=0;i<n;i++) scanf("%d",&arr[i]);
            s.clear();
            for(int i=0;i<n;i++){
                scanf("%d",&a);
                ok(arr[i],a-1);
            }
            cout<<s<<endl;
    }
}
