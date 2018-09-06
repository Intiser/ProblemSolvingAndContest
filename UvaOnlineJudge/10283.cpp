#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    double R,r,n,l,h,e;   //input radii,n and
    double Grey,Blue,Green; //output area
    double s,t,area_t,area_r,T_area_r,area_R,area_part,side;
    double area_P,angle,k,area_r_p,T_area_r_p,area_term,pi;
    double a[10];
     //long double area_t,area_r,T_area_r,area_R,area_part,side,area_P,angle,k,area_r_p,T_area_r_p,area_term;

    while(cin>>R>>n)
    {

      if(n>=3)
        {
            l=R;                h=l*tan(M_PI/n);     e=sqrt(l*l+h*h); //n*2 traingles > l=altitude/height h=base e=hypotenuse
            area_t=l*h;      // per triangle areas of n triangle
            r=(2*area_t)/(e+2*h+e); //radius of inner circle- Grey
            area_r=(M_PI*r)*r; //area of inner circle
            T_area_r=(area_r*n); //total area of n circles

            Grey=r; //taking into output variable

            area_R=M_PI*R*R; //actual circle area
            side=r*2; // polygon side (inner circles center to center added)
            area_P=(n*side*side*(1/tan(M_PI/n)))/4; //polygon area
           // t=R-r;  s=(t+t+side)/2;  //area_P=n*((side*sqrt(4*t*t-side*side))/4); //nothing
            angle=((n-2)*180)/n; k=360/angle;  //angles of inner circle inside polygon
            area_r_p=(area_r/k);   //per inner cicle area inside polygon
            T_area_r_p=n*area_r_p; //total inner circles area inside polygon

            Blue=area_P-T_area_r_p; //blue=polygon-inside circle areas inside polygon

            area_term=area_R-T_area_r; //bigger circle's area - inner n circles total area

            Green=area_term-Blue; // Green = area without inner circles - blue colored area
            //Blue=area_term-Green; // nothing

            //cout<<Grey<<" "<<Blue<<" "<<Green<<endl; // nothing
            printf("%.10lf %.10lf %.10lf\n",Grey,Blue,Green);
            // printf("%.20lf %.10lf\n",M_PI*100,area_R); //nothing

        }
        else if(n==2)
        {
            r=R/2;            // for n==2
            Grey=r;

            area_r=M_PI*r*r;
            T_area_r=area_r*n;
            area_R=M_PI*R*R;

            Green=area_R-T_area_r;
            Blue=0;

             printf("%.10lf %.10lf %.10lf\n",Grey,Blue,Green);

        }
        else
        {
            Grey=R;           // for n==1
            Green=0;
            Blue=0;

             printf("%.10lf %.10lf %.10lf\n",Grey,Blue,Green);
        }
    }

}
