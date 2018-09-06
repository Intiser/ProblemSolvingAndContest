#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    double sqrside,c_area,p_area,tp_area,n,type1_area,type2_area,t1_area,area1,area2,area3,shrt_t_side,hf,f,anside,side;

    while(cin>>sqrside)
    {

        c_area=M_PI*sqrside*sqrside;

        p_area=(12*sqrside*sqrside*sin((2*M_PI)/12))/2;

        tp_area=(c_area-p_area)/12;

        hf=sqrside*sin((2*M_PI)/24);

        f=2*hf;

        anside=sqrside/2;

        shrt_t_side=sqrt(f*f-anside*anside);

        type1_area=(shrt_t_side*anside)/2 - tp_area;

        area3=type1_area*8;

      //    printf("%.3lf\n",area3);

        side=anside-shrt_t_side;

        type2_area=(side*side)/2+tp_area;

        area1=type2_area*4;

      // printf("%.3lf\n",area1);

        area2=(sqrside*sqrside)-(area1+area3);

        printf("%.3lf %.3lf %.3lf\n",area1,area2,area3);



    }





}

