#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,j,k,l;
    char c[11];

    double x1[11],x2[11],y1[11],y2[11],A,B,r[11],c1[11],c2[11],d,Xa[11],Xb[11],Xc[11],Ya[11],Yb[11],Yc[11],t_area,area_a,area_b,area_c,add,val1,val2;
    i=0;
    while(cin>>c[i]){
        if(c[i]!='*'){
          if(c[i]=='r'){
            cin>>x1[i]>>y2[i]>>x2[i]>>y1[i];
            // cout<<x1[i]<<" "<<y1[i]<<endl;
            i++;
          }
          else if(c[i]=='c'){
              cin>>c1[i]>>c2[i]>>r[i];
              i++;
            }
          else{
            cin>>Xa[i]>>Ya[i]>>Xb[i]>>Yb[i]>>Xc[i]>>Yc[i];
            i++;
            }
        }
        else
            break;
    }

    for(j=1;cin>>A>>B;j++)
    {
        if(A!=9999.9&&B!=9999.9){
          for(k=0,l=0;k<=i;k++){
                if(c[k]=='r'){
              if(((B>y1[k]&&B<y2[k])&&(A>x1[k]&&A<x2[k])))
              {
                  l++;

              cout<<"Point "<<j<<" is contained in figure "<<k+1<<endl;
              }
            }
            else if(c[k]=='c'){
                if(((c1[k]-A)*(c1[k]-A)+(c2[k]-B)*(c2[k]-B)<(r[k]*r[k]))){
                    cout<<"Point "<<j<<" is contained in figure "<<k+1<<endl;
                    l++;
                }
            }
            else if(c[k]=='t'){
                t_area=(Xa[k]*(Yb[k]-Yc[k])+Xb[k]*(Yc[k]-Ya[k])+Xc[k]*(Ya[k]-Yb[k]))/2.00;
                area_c=(Xa[k]*(Yb[k]-B)+Xb[k]*(B-Ya[k])+A*(Ya[k]-Yb[k]))/2.00;
                area_b=(Xa[k]*(B-Yc[k])+A*(Yc[k]-Ya[k])+Xc[k]*(Ya[k]-B))/2.00;
                area_a=(A*(Yb[k]-Yc[k])+Xb[k]*(Yc[k]-B)+Xc[k]*(B-Yb[k]))/2.00;
                add=(area_a+area_b+area_c);

                if(area_c<0){
                    val1=-area_c;
                }
                else
                    val1=area_c;

               if(area_b<0)
                    val1=val1-area_b;
                else
                    val1=val1+area_b;

               if(area_a<0)
                    val1=val1-area_a;
               else
                    val1=val1+area_a;

              // val2=-t_area;

               if(t_area<0)
                    t_area=-t_area;

                if(t_area==val1||area_a==0||area_b==0||area_c==0){
                    cout<<"Point "<<j<<" is contained in figure "<<k+1<<endl;
                  //cout<<t_area<<" "<<area_a<<" "<<area_b<<" "<<area_c<<endl;
                    l++;
                }
            // cout<<t_area<<" "<<add<<endl;

            }


          }
          if(l==0)
           cout<<"Point "<<j<<" is not contained in any figure"<<endl;

        }
        else
            break;

    }





}

