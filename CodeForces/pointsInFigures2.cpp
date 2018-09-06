#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

double eps=0.001;

bool insideTheRectangle(double x1,double y1,double x2,double y2,double x,double y){
    if(x>x1 && x<x2 && y>y2 && y<y1){
        return true;
    }
    else{
        return false;
    }
}

bool insideTheCircle(double x1,double y1,double rad,double x,double y){
    double distance;
    distance=sqrt(((abs(x-x1)*abs(x-x1))+(abs(y-y1)*abs(y-y1))));
    if(distance<rad){
        return true;
    }
    else{
        return false;
    }
}

double triangleArea(double x1,double y1,double x2,double y2,double x3,double y3){
    double area;
    area=0.5*abs((x1*(y2-y3)+(x2*(y3-y1))+(x3*(y1-y2))));
    return area;
}

bool insideTheTriangle(double x1,double y1,double x2,double y2,double x3,double y3,double x,double y){
    double area1,area2,area3,mainArea,areaSum;
    area1=triangleArea(x1,y1,x2,y2,x,y);
    area2=triangleArea(x1,y1,x3,y3,x,y);
    area3=triangleArea(x2,y2,x3,y3,x,y);
    mainArea=triangleArea(x1,y1,x2,y2,x3,y3);
    areaSum=area1+area2+area3;

    //cout<<mainArea<<" main .. sum "<<areaSum<<endl;
    cout<<area1<<" "<<area2<<" "<<area3<<endl;
    if(abs(areaSum-mainArea)<eps){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n=20,i=1;
    double x1[n],y1[n],x2[n],y2[n],x3[n],y3[n],radius[n],x,y;
    //x1y1->upper left,center of the circle
    //x2y2->lower right
    string types[n];
    while(cin>>types[i]){
        if(types[i]=="r"){
            cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        }
        else if(types[i]=="c"){
            cin>>x1[i]>>y1[i]>>radius[i];
        }
        else if(types[i]=="t"){
            cin>>x1[i]>>y1[i]>>x2[i]>>y2[i]>>x3[i]>>y3[i];
        }
        else if(types[i]=="*"){
            break;
        }
        i++;
    }
    bool in,notInAny=true;
    int pointNumber=0;
    while(cin>>x>>y){
        ++pointNumber;
        if(x==9999.9 && y==9999.9){
            break;
        }
        for(int j=1;j<i;j++){
            //cout<<"***  checking "<<j<<" type "<<types[j]<<endl;
            if(types[j]=="r"){
                in=insideTheRectangle(x1[j],y1[j],x2[j],y2[j],x,y);
                if(in==true){
                    cout<<"Point "<<pointNumber<<" is contained in figure "<<j<<endl;
                    notInAny=false;
                }
            }
            else if(types[j]=="c"){
                in=insideTheCircle(x1[j],y1[j],radius[j],x,y);
                if(in==true){
                    cout<<"Point "<<pointNumber<<" is contained in figure "<<j<<endl;
                    notInAny=false;
                }
            }
            else if(types[j]=="t"){
                in=insideTheTriangle(x1[j],y1[j],x2[j],y2[j],x3[j],y3[j],x,y);
                if(in==true){
                    cout<<"Point "<<pointNumber<<" is contained in figure "<<j<<endl;
                    notInAny=false;
                }
            }
        }
        if(notInAny==true){
            cout<<"Point "<<pointNumber<<" is not contained in any figure"<<endl;
        }
        else{
            notInAny=true;
        }
    }
}
