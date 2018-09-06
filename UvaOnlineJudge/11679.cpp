#include<iostream>

using namespace std;

int main()
{
    int B,N,R[20],D[20],C[20],V[20],T_C,T_D,T_V,T_R,i,j,k;
    while(cin>>B>>N)
    {
        if(B==0&&N==0)
            break;

       for(i=0,T_R=0;i<B;i++)
       {
           cin>>R[i];
            T_R=T_R+R[i];
       }

       for(j=0,T_D=0,T_C=0,T_V=0,k=0;j<N;j++)
       {
         cin>>D[j]>>C[j]>>V[j];
         T_D=T_D+D[j];
         T_C=T_C+C[j];

          if(V[j]>T_R)
            k=1;

       }
       if(T_C>=T_D)
       {
           if(k==0)
            cout<<"S"<<endl;
           else
            cout<<"N"<<endl;
       }
       else
        cout<<"N"<<endl;

    }

}
