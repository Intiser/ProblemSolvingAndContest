#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,i,j,d1,m1,y1,d2,m2,y2,age;

    cin>>t;

    for(i=0;i<t;i++)
    {
        scanf("\n");
         scanf("%d/%d/%d",&d1,&m1,&y1);
         //fflush(stdin);
         scanf("%d/%d/%d",&d2,&m2,&y2);
         //fflush(stdin);

         cout<<"Case #"<<i+1<<": ";

         if(y2<y1)
         {
             if(m2<m1)
             {


                     age=y1-y2;
                      if(age<=130)
                    cout<<age<<endl;
                    else
                    cout<<"Check birth date"<<endl;

             }
             else if(m1==m2)
             {
                 if(d1>=d2)
                 {
                     age=y1-y2;
                 }
                 else
                    age=y1-y2-1;
                     if(age<=130)
                    cout<<age<<endl;
                    else
                    cout<<"Check birth date"<<endl;
             }
             else
             {
                 age=y1-y2-1;
                 if(age<=130)
                cout<<age<<endl;
                else
                  cout<<"Check birth date"<<endl;

             }
         }
         else if(y2==y1)
         {
            if(m1>=m2)
            {
                if(d1>=d2)
                {age=0;
                cout<<age<<endl;
                }

                else
                    cout<<"Invalid birth date"<<endl;
            }

            else
                cout<<"Invalid birth date"<<endl;

         }
         else
            cout<<"Invalid birth date"<<endl;



         //cout<<d1<<m1<<y1<<endl;

    }

}
