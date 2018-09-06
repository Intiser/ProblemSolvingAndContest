#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

double eps = 0.0000000001;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    double current,searching;
    double RU,LU,RL,LL,CL,CU,m,n,i,EU,EL;
    string result;

    while(cin>>m>>n)
    {
       if(m==1&&n==1)
        break;

           CU=1; CL=1; RL=0; RU=1; LL=1; LU=0,EU=m,EL=n;
           searching=m/n;
           current=CU/CL; i=0;
           while(!(abs(CU-EU)<eps&&abs(CL-EL)<eps))
            {

               if(current<searching)
                {
                     LL=CL; LU=CU;
                     CL=CL+RL; CU=CU+RU;
                     result[i]='R';
                    cout<<CU<<" "<<CL<<endl;
                   printf("R");
                }
                else if(current>searching)
                {
                    RL=CL; RU=CU;
                    CL=CL+LL; CU=CU+LU;
                    result[i]='L';
                      cout<<CU<<" "<<CL<<endl;
                      printf("L");
                }
                else
                {
                break;
                }

                current=CU/CL;
                i++;
                cout<<" thik ase "<<endl;
            }
             printf("\n");




    }

}
