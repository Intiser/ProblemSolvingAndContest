#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct node{
    node *next[30];
    int fl;
    node(){
        for(int i=0;i<26;i++) next[0] = NULL;
        fl = 0;
    }
};

node head;

void init(){
   node* head = new node();
}

void add(int n,int *node){

}

void inserting(char ch[30]){
        int l = strlen(ch);
        for(int i=0;i<l;i++){
            int n = ch[i] - 'a';
                    }
}

int main(){

}
