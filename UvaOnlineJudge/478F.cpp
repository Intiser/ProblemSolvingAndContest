#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

double eps=0.001;

bool rect(double x,double y,double x1,double y1,double x2,double y2){
    if((x>x1&&x<x2)&&(y>y2&&y<y1))
        return true;
    else
        return false;
}

bool circ(double x,double y,double r,double X,double Y){
    double dis=(X-x)*(X-x)+(Y-y)*(Y-y);
    if(r*r>dis) return true;
    else return false;
}
double triangleArea(double x1,double y1,double x2,double y2,double x3,double y3){
    /*double area;
    area=0.5*abs((x1*(y2-y3)+(x2*(y3-y1))+(x3*(y1-y2))));
    return area;*/
    double area;
    area=0.5*abs((x1*(y2-y3)+(x2*(y3-y1))+(x3*(y1-y2))));
    return area;
}

bool triangle(double x1,double y1,double x2,double y2,double x3,double y3,double x,double y){
   /* double tri,area1,area2,area3,tot;
    //tri = tri_area(x1,y1,x2,y2,x3,y3);
    //area1 = tri_area(X,Y,x2,y2,x3,y3);
    //area2 = tri_area(X,Y,x1,y1,x3,y3);
    //area3 = tri_area(X,Y,x1,y1,x2,y2);
    tri = triangleArea(x1,y1,x2,y2,x3,y3);
    area1=triangleArea(x1,y1,x2,y2,X,Y);
    area2=triangleArea(x1,y1,x3,y3,X,Y);
    area3=triangleArea(x2,y2,x3,y3,X,Y);
    tot = area1 + area2 + area3 ;
    cout<<tot<<" "<<tri<<endl;
    if(abs(tot-tri)<eps)
        return true;
    else
        return false;*/
    double area1,area2,area3,mainArea,areaSum;
    area1=triangleArea(x1,y1,x2,y2,x,y);
    area2=triangleArea(x1,y1,x3,y3,x,y);
    area3=triangleArea(x2,y2,x3,y3,x,y);
    mainArea=triangleArea(x1,y1,x2,y2,x3,y3);
    areaSum=area1+area2+area3;

    //cout<<mainArea<<" main .. sum "<<areaSum<<endl;
    //cout<<area1<<" "<<area2<<" "<<area3<<endl;
    if(abs(areaSum-mainArea)<eps){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int flag,fig=0;
    char c[25];
    double x1[25],y1[25],x2[25],y2[25],x3[25],y3[25],rad[25],x,y;
    for(int i=0;cin>>c[i];i++){
        if(c[i]=='*') break;
        if(c[i]=='r'){
           cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        }
        else if(c[i]=='c'){
            cin>>x1[i]>>y1[i]>>rad[i];
        }
        else if(c[i]=='t'){
            cin>>x1[i]>>y1[i]>>x2[i]>>y2[i]>>x3[i]>>y3[i];
        }
        fig++;
    }
    for(int i=1;cin>>x>>y;i++){
        if(x==9999.9&&y==9999.9){
            break;
        }
        flag=0;
        for(int j=0;j<fig;j++){
            if(c[j]=='r'){
                if(rect(x,y,x1[j],y1[j],x2[j],y2[j])){
                    flag=1;
                    printf("Point %d is contained in figure %d\n",i,j+1);
                }
            }
            else if(c[j]=='c'){
                if(circ(x1[j],y1[j],rad[j],x,y)){
                    flag=1;
                    printf("Point %d is contained in figure %d\n",i,j+1);
                }
            }
            else if(c[j]=='t'){
                if(triangle(x1[j],y1[j],x2[j],y2[j],x3[j],y3[j],x,y)){
                    flag=1;
                    printf("Point %d is contained in figure %d\n",i,j+1);
                }
            }
        }
        if(flag==0){
            printf("Point %d is not contained in any figure\n",i);
        }
    }
}
