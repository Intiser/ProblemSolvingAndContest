#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n,i,j,k,temp,key,key_t;
    double avg,total,cash[1010],avrg,excng;

    while(cin>>n)
    {
        if(n==0)
            break;

        total=0;
        for(i=0;i<n;i++)
        {
           scanf("%lf",&cash[i]);
            total=total+cash[i];
        }
        avg=total/n;
        key_t=floor(avg*1000);
        key=key_t%10;

        if(key>=5)
            temp=ceil(avg*100);
        else
           temp=floor(avg*100);



          avrg=temp*.01;

        excng=0;

        if(key>=5)
        for(i=0;i<n;i++)
        {
            if(cash[i]>avrg)
                excng=excng+(cash[i]-avrg);
        }

        else if(key<5)
            for(i=0;i<n;i++)
        {
            if(cash[i]<avrg)
                excng=excng+(avrg-cash[i]);
        }

        printf("$%.2lf\n",excng);

    }

}
