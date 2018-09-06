#include<iostream>
#include<stdio.h>

using namespace std;

string add(string a,string b){
    int l1 = a.size();
    int l2 = b.size();
    string res;

        int c = 0,i,j;
        for(i=0, j=0;i<l1&&j<l2;i++,j++){
            int n1 = a[i] - '0';
            int n2 = b[j] - '0';
            res.push_back((c+n1+n2)%10 + '0');
            c = (c+n1+n2)/10;
        }
        if(i==l1&&j==l2&&c){
            res.push_back(c+ '0');
            c = 0;
        }
        else if(j==l2){
            while(i<l1){
                int n1 = a[i] - '0';
                res.push_back((n1+c)%10 + '0');
                c = (c+n1)/10;
                i++;
            }
        }
        else if(i==l1){
            while(j<l2){
                int n1 = b[j] - '0';
                res.push_back((n1+c)%10 + '0');
                c = (c+n1)/10;
                j++;
            }
        }

        if(c>0) res.push_back(c + '0');

        return res;

}


int main(){

}
