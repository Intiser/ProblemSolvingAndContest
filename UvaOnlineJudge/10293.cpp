#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

long long int freq[35];

void funct(){
    cout<<"# test"<<endl;
    for(int i=1;i<=30;i++){
            if(freq[i]){
                printf("%d %d\n",i,freq[i]);
            }

        }
        cout<<"# end"<<endl;
}

int main(){
    string s;
    char c;
    int word;
    while(getline(cin,s)){
            int len = s.size();
                    for(int i=0;s[i]<len;i++){

                        if(s[i]=='!'||s[i]=='\?'||s[i]=='.'||s[i]==','||s[i]==' '||s[i]=='\t'||s[i]=='\n'){
                            freq[word]++;
                            word = 0;
                        }
                        else if(s[i]=='-'||s[i]=='\''){
                            ;
                        }
                        else if(s[i]!='#')
                            word++;
                    }
            cout<<" nai "<<endl;

        if(s!="#")
        while(getline(cin,s)){
            if(s=="#"){
                break;
            }
                int len = s.size();
                for(int i=0;s[i]<len;i++){

                    if(s[i]=='!'||s[i]=='\?'||s[i]=='.'||s[i]==','||s[i]==' '||s[i]=='\t'||s[i]=='\n'){
                        freq[word]++;
                        word = 0;
                    }
                    else if(s[i]=='-'||s[i]=='\''){
                        ;
                    }
                    else if(s[i]!='#')
                        word++;
                }
            cout<<" nai "<<endl;
        }
        if(word){
            freq[word]++;
            word = 0;
        }
        for(int i=1;i<=30;i++){
            if(freq[i]){
                printf("%d %lld\n",i,freq[i]);
            }
            freq[i] = 0;
        }
        printf("\n");
    }
}
