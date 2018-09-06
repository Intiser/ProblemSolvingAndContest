#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int  direction(int  x1,int  y1,int  x2,int  y2,int  x3,int  y3){
    return (x3-x1)*(y2-y1)-(x2-x1)*(y3-y1);
}

bool On_segment(int  x1,int  y1,int  x2,int  y2,int  x3,int  y3){
    if(min(x1,x2)<=x3&&x3<=max(x1,x2)&&min(y1,y2)<=y3&&y3<=max(y1,y2))
        return true;
    return false;
}

bool intersect(int  x1,int  y1,int  x2,int  y2,int  x3,int  y3,int  x4,int  y4){
    int  d1=direction(x3,y3,x4,y4,x1,y1);
    int  d2=direction(x3,y3,x4,y4,x2,y2);
    int  d3=direction(x1,y1,x2,y2,x3,y3);
    int  d4=direction(x1,y1,x2,y2,x4,y4);
    if((d1>0&&d2<0)||(d1<0&&d2>0)||(d3>0&&d4<0)||(d3<0&&d4>0))
        return true;
    else if(d1==0&&On_segment(x3,y3,x4,y4,x1,y1)){
        return true;
    }
    else if(d2==0&&On_segment(x3,y3,x4,y4,x2,y2)){
        return true ;
    }
    else if(d3==0&&On_segment(x1,y1,x2,y2,x3,y3)){
        return true;
    }
    else if(d4==0&&On_segment(x1,y1,x2,y2,x4,y4)){
        return true;
    }
    else return false;
}

int main(){
    int t;
    int  Xa,Xb,X1,X2,Ya,Yb,Y1,Y2;
    cin>>t;
    while(t--){
        cin>>Xa>>Ya>>Xb>>Yb>>X1>>Y1>>X2>>Y2;
        if(intersect(Xa,Ya,Xb,Yb,X1,Y1,X1,Y2)){
            printf("T\n");
        }
        else if(intersect(Xa,Ya,Xb,Yb,X1,Y2,X2,Y2)){
            printf("T\n");
        }
        else if(intersect(Xa,Ya,Xb,Yb,X2,Y2,X2,Y1)){
            printf("T\n");
        }
        else if(intersect(Xa,Ya,Xb,Yb,X2,Y1,X1,Y1)){
            printf("T\n");
        }
        else{
            printf("F\n");
        }

    }
}
