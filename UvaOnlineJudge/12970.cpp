#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

long long int gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}


int main(){
    long long int v1,v2,d1,d2,win,tot1,tot2,a,b,cs=1,avg,frc,tt,gc,sm,bg;
    double t1,t2,tot;
    while(cin>>v1>>d1>>v2>>d2){
        if(v1==0&&d1==0&&v2==0&&d2==0) break;
        t1=double(d1/double(v1));
        t2=double(d2/double(v2));
        win=0;
        if(t1<t2) win=1;
        tot=t1+t2;

        if(win==1)
        printf("Case #%lld: You owe me a beer!\n",cs);
        else
        printf("Case #%lld: No beer for the captain.\n",cs);

        cs++;

       /* if(tot%2==0){
            avg=tot/2;
            printf("Avg. arrival time: %lld\n",avg);
        }
        else
        {
            a=tot;
            b=2;
            printf("Avg. arrival time: %lld/%lld\n",a,b);
        }*/
        tot1=v2*d1;
        tot2=v1*d2;
        tot=tot*v1*v2;
        tt=tot1+tot2;
        frc=2*v1*v2;
        if(tt>frc){
            gc=gcd(tt,frc);
            a=tt/gc;
            b=frc/gc;
            avg=a/b;
            if(a%b!=0)
            printf("Avg. arrival time: %lld/%lld\n",a,b);
            else
             printf("Avg. arrival time: %lld\n",avg);
        }
        else if(frc>tt){
            gc=gcd(frc,tt);
            a=tot/gc;
            b=frc/gc;
            if(b%a!=0)
            printf("Avg. arrival time: %lld/%lld\n",a,b);
            else{
                b=b/a;
                a=1;
              printf("Avg. arrival time: %lld/%lld\n",a,b);
            }
        }
        else{
            avg=tt/frc;
             printf("Avg. arrival time: %lld\n",avg);
        }

        //cout<<tot1<<" "<<tot2<<" "<<tot<<endl;

    }
}
