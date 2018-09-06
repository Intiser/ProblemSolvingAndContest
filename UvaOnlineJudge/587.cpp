#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int term,len,mp=1;
    double x,y,dis,intl_x,intl_y;
    string s;
    while(getline(cin,s)){
        if(s=="END") break;
        len=s.size();
        x=0;y=0;term=0;
        for(int i=0;i<len;i++){
            if(s[i]>='0'&&s[i]<='9'){
                term=term*10+(s[i]-'0');
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                if(s[i]=='N'&&s[i+1]=='E'){
                    x=x+sqrt(2)*term/2;
                    y=y+sqrt(2)*term/2;
                    i++;
                }
                else if(s[i]=='N'&&s[i+1]=='W'){
                    x=x-sqrt(2)*term/2;
                    y=y+sqrt(2)*term/2;
                    i++;
                }
                else if(s[i]=='S'&&s[i+1]=='E'){
                    x=x+sqrt(2)*term/2;
                    y=y-sqrt(2)*term/2;
                    i++;
                }
                else if(s[i]=='S'&&s[i+1]=='W'){
                    x=x-sqrt(2)*term/2;
                    y=y-sqrt(2)*term/2;
                    i++;
                }
                else if(s[i]=='N'){
                    y=y+term;
                }
                else if(s[i]=='S'){
                    y=y-term;
                }
                else if(s[i]=='E'){
                    x=x+term;
                }
                else if(s[i]=='W'){
                    x=x-term;
                }
                term=0;
            }
            else {
                continue;
            }
        }
        dis=sqrt((x)*(x)+y*y);
        printf("Map #%d\n",mp);
        printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
        printf("The distance to the treasure is %.3lf.\n\n",dis);
        mp++;
    }
}
