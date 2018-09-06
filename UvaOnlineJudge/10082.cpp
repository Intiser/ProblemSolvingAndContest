#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    string s,ans;
    long long int i,j,k,len,c;

    while(getline(cin,s))
    {
        //cout<<s<<endl;
        len=s.size();
        for(i=0;i<len;i++)
        {
            if(s[i]==' '){

                ans.push_back(' ');
            }
            else if(s[i]=='1'){
                ans.push_back('`');
            }
            else if(s[i]=='2'){
                ans.push_back('1');
            }
            else if(s[i]=='3'){
                 ans.push_back('2');
            }
            else if(s[i]=='4'){
                 ans.push_back('3');
            }
            else if(s[i]=='5'){
                 ans.push_back('4');
            }
            else if(s[i]=='6'){
                 ans.push_back('5');
            }
            else if(s[i]=='7'){
                ans.push_back('6');
            }
            else if(s[i]=='8'){
                ans.push_back('7');
            }
            else if(s[i]=='9'){
               ans.push_back('8');
            }
            else if(s[i]=='0'){
                ans.push_back('9');
            }
            else if(s[i]=='-'){
                ans.push_back('0');
            }
            else if(s[i]=='='){
                ans.push_back('-');
            }
            else if(s[i]=='S'){
                ans.push_back('A');
            }
            else if(s[i]=='D'){
                ans.push_back('S');
            }
            else if(s[i]=='F'){
                ans.push_back('D');
            }
            else if(s[i]=='G'){
                ans.push_back('F');
            }
            else if(s[i]=='H'){
                ans.push_back('G');
            }
            else if(s[i]=='J'){
                ans.push_back('H');
            }
            else if(s[i]=='K'){
                ans.push_back('J');
            }
            else if(s[i]=='L'){
                ans.push_back('K');
            }
            else if(s[i]==';'){
                ans.push_back('L');
            }
            else if(s[i]=='W'){
                ans.push_back('Q');
            }
            else if(s[i]=='E'){
                ans.push_back('W');
            }
            else if(s[i]=='R'){
                ans.push_back('E');
            }
            else if(s[i]=='T'){
                ans.push_back('R');
            }
            else if(s[i]=='Y'){
                ans.push_back('T');
            }
            else if(s[i]=='U'){
                ans.push_back('Y');
            }
            else if(s[i]=='I'){
                ans.push_back('U');
            }
            else if(s[i]=='O'){
                ans.push_back('I');
            }
            else if(s[i]=='P'){
                ans.push_back('O');
            }
            else if(s[i]=='['){
                ans.push_back('P');
            }
            else if(s[i]==']'){
                ans.push_back('[');
            }
            else if(s[i]=='\\'){
                ans.push_back(']');
            }
            else if(s[i]=='X'){
                ans.push_back('Z');
            }
            else if(s[i]=='C'){
                ans.push_back('X');
            }
            else if(s[i]=='V'){
                ans.push_back('C');
            }
            else if(s[i]=='B'){
                ans.push_back('V');
            }
            else if(s[i]=='N'){
                ans.push_back('B');
            }
            else if(s[i]=='M'){
                ans.push_back('N');
            }
            else if(s[i]==','){
                ans.push_back('M');
            }
            else if(s[i]=='.'){
                ans.push_back(',');
            }
            else if(s[i]=='/'){
                ans.push_back('.');
            }
            else
                ans.push_back(';');



        }
        cout<<ans<<endl;
        ans.clear();

    }

}
