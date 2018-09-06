#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int n,fours,mod,last,frst,f1,f2,b1,b2,sheet;
    while(cin>>n){
        if(n==0) break;
        fours=ceil(n*1.0/4)-1;
        mod=n%4;
        last=n;
        frst=1;
        if(mod==0) {
            f1=last; f2=frst;
            last--; frst++;
            b1=frst; b2=last;
            last--; frst++;
        }
        else if(n==1){
            f1=0; f2=frst; frst++;
            b1=0; b2=0;
        }
        else if(mod==1){
            f1=0; f2=frst; frst++;
            b1=frst; b2=0; frst++;
        }
        else if(mod==2){
            f1=0; f2=frst; frst++;
            b1=frst; b2=0; frst++;
        }
        else{
            f1=0; f2=frst; frst++;
            b1=frst; b2=last; frst++; last--;
        }


        if(n==1){
            printf("Printing order for %d pages:\n",n);
            printf("Sheet 1, front: Blank, 1\n");
        }
        else if(mod==1){
            printf("Printing order for %d pages:\n",n);
            printf("Sheet 1, front: Blank, 1\n");
            printf("Sheet 1, back : %d, Blank\n",b1);
        }
        else if(mod==2){
            printf("Printing order for %d pages:\n",n);
            printf("Sheet 1, front: Blank, 1\n");
            printf("Sheet 1, back : %d, Blank\n",b1);
        }
        else if(mod==3){
            printf("Printing order for %d pages:\n",n);
            printf("Sheet 1, front: Blank, 1\n");
            printf("Sheet 1, back : %d, %d\n",b1,b2);
        }
        else{
            printf("Printing order for %d pages:\n",n);
            printf("Sheet 1, front: %d, 1\n",f1);
            printf("Sheet 1, back : %d, %d\n",b1,b2);
        }
        sheet=2;
        for(int i=0;i<fours;i++){
            if(mod==1&&sheet==2){
            f2=frst;
            frst++;
            b1=frst; b2=last;
            last--; frst++;
            printf("Sheet %d, front: Blank, %d\n",sheet,f2);
            printf("Sheet %d, back : %d, %d\n",sheet,b1,b2);
            sheet++;
            }else{

             f1=last; f2=frst;
            last--; frst++;
            b1=frst; b2=last;
            last--; frst++;
            printf("Sheet %d, front: %d, %d\n",sheet,f1,f2);
            printf("Sheet %d, back : %d, %d\n",sheet,b1,b2);
            sheet++;
            }
        }
    }
}
