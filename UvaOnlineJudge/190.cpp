#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    double Ax,Ay,Bx,By,Cx,Cy,a,b,c,X,Y,D,R,C;

    while(cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy)
    {

        D =2*(Ax*(By - Cy) + Bx*(Cy - Ay) + Cx*(Ay - By));

        X=((Ax*Ax + Ay*Ay)*(By - Cy) + (Bx*Bx + By*By)*(Cy - Ay) + (Cx*Cx + Cy*Cy)*(Ay - By))/D;
        Y=((Ax*Ax+ Ay*Ay)*(Cx - Bx) + (Bx*Bx + By*By)*(Ax - Cx) + (Cx*Cx + Cy*Cy)*(Bx - Ax))/D;

        R=sqrt((Ax-X)*(Ax-X)+(Ay-Y)*(Ay-Y));

        C=X*X+Y*Y-R*R;

      //  printf("%.3lf\n",X);

        //printf("%.3lf\n",Y);

         //printf("%.3lf\n",R);

         //printf("%.3lf\n",C);

         if(X>0)
         {
             printf("(x - %.3lf)^2 + ",abs(X));
         }
         else if(X<0)
         printf("(x + %.3lf)^2 + ",abs(X));
         else
              printf("(x - %.3lf)^2 + ",abs(X));

          if(Y>0)
         {
             printf("(y - %.3lf)^2 = ",abs(Y));
         }
         else if(Y<0)
         printf("(x + %.3lf)^2 = ",abs(Y));
          else
            printf("(y - %.3lf)^2 = ",abs(Y));


            printf("%.3lf^2\n",R);






         if(X>0)
         {
             printf("x^2 + y^2 - %.3lfx ",2*abs(X));
         }
         else if(X<0)
         printf("x^2 + y^2 + %.3lfx ",2*abs(X));
            else
                printf("x^2 + y^2 - %.3lfx ",2*abs(X));


            if(Y>0)
         {
             printf("- %.3lfy ",2*abs(Y));
         }
         else if(Y<0)
         printf("+ %.3lfy ",2*abs(Y));
          else
            printf("- %.3lfy ",2*abs(Y));


                if(C>0)
         {
             printf("+ %.3lf = 0\n",abs(C));
         }
         else if(C<0)
         printf("- %.3lf = 0\n",abs(C));
            else
                printf("+ %.3lf = 0\n",abs(C));


        printf("\n");


    }



}

