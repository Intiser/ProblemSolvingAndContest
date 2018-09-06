#include<iostream>

using namespace std;

int main()
{
    double h,u,d,f,tg,dflt,ablt,prcnt;
    int i,j;

    while(cin>>h>>u>>d>>f)
    {
        if(h==0&&u==0&&d==0&&f==0)
            break;

        tg=h;
        dflt=0;
        ablt=u;
        prcnt=(u/100)*f;
         for(i=0;dflt<=tg;i++)
          {
              if(i>0)
                dflt=dflt-d;

               if(i>0&&dflt<0)
                 break;

              dflt=dflt+ablt;
              if(ablt>0)
              ablt=ablt-prcnt;

               //ablt=ablt-((ablt/100)*f);


              //cout<<dflt<<" "<<prcnt<<" "<<ablt<<endl;

          }
          if(dflt<0)
          cout<<"failure on day "<<i<<endl;
           else
            cout<<"success on day "<<i<<endl;



    }


}
