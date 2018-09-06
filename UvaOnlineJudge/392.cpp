#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long int arr[10],start,in;
    while(cin>>arr[8]>>arr[7]>>arr[6]>>arr[5]>>arr[4]>>arr[3]>>arr[2]>>arr[1]>>arr[0]){
        start = 0;
        if(arr[8]!=0){
            if(arr[8]==-1){
                printf("-x^8");
            }
            else if(arr[8]==1){
                printf("x^8");
            }
            else if(arr[8]<1){
                printf("-%lldx^8",-arr[8]);
            }
            else{
                printf("%lldx^8",arr[8]);
            }
            start = 1;
            //cout<<start<<" "<<in<<endl;
        }

        //start
        for(in = 7; in >1 ; in--){

            if(arr[in]!=0){
                if(start == 1) printf(" ");
                //cout<<endl<<start<<" "<<in<<endl;
                 if(arr[in]==-1&&start==0){
                    printf("-x^%lld",in);
                }
                else if(arr[in]==1&&start == 0){
                   printf("x^%lld",in);
                }
                 else if(arr[in]==-1&&start==1){
                    printf("- x^%lld",in);
                }
                else if(arr[in]==1&&start == 1){
                   printf("+ x^%lld",in);
                }
                else if(arr[in]<1&&start==1){
                    printf("- %dx^%lld",-arr[in],in);
                }
                else if(arr[in]<1&&start==0){
                    printf("-%dx^%lld",-arr[in],in);
                }
                else if(arr[in]>1&&start==0){
                    printf("%dx^%lld",arr[in],in);
                }
                else if(arr[in]>1&&start==1){
                    printf("+ %dx^%lld",arr[in],in);
                }

                start = 1;
            }

        }

        //end
        /*
        in = 6;
        if(arr[in]!=0){
              if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]<0&&start==0){
                printf("-%dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]>0&&start==1){
                printf("+ %dx^%d",arr[in],in);
            }
            else{
                printf("%dx^%d",arr[in],in);
            }
            start = 1;
        }
        in -- ;
        if(arr[5]!=0){
             if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]<0&&start==0){
                printf("-%dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]>0&&start==1){
                printf("+ %dx^%d",arr[in],in);
            }
            else{
                printf("%dx^%d",arr[in],in);
            }
            start = 1;
        }
        in --;
        if(arr[4]!=0){
              if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]<0&&start==0){
                printf("-%dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]>0&&start==1){
                printf("+ %dx^%d",arr[in],in);
            }
            else{
                printf("%dx^%d",arr[in],in);
            }
            start = 1;
        }
        in--;
        if(arr[3]!=0){
            if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]<0&&start==0){
                printf("-%dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]>0&&start==1){
                printf("+ %dx^%d",arr[in],in);
            }
            else{
                printf("%dx^%d",arr[in],in);
            }
            start = 1;
        }
        in--;
        if(arr[2]!=0){
              if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]<0&&start==0){
                printf("-%dx^%d",abs(arr[in]),in);
            }
            else if(arr[6]>0&&start==1){
                printf("+ %dx^%d",arr[in],in);
            }
            else{
                printf("%dx^%d",arr[in],in);
            }
            start = 1;
        }
        in--;
        if(arr[1]!=0){
             if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %dx",abs(arr[in]));
            }
            else if(arr[6]<0&&start==0){
                printf("-%dx",abs(arr[in]));
            }
            else if(arr[6]>0&&start==1){
                printf("+ %dx",arr[in]);
            }
            else{
                printf("%dx",arr[in]);
            }
            start = 1;
        }*/
        if(arr[in]!=0){
                if(start == 1) printf(" ");
                //cout<<endl<<start<<" "<<in<<endl;
                 if(arr[in]==-1&&start==0){
                    printf("-x");
                }
                else if(arr[in]==1&&start == 0){
                   printf("x");
                }
                 else if(arr[in]==-1&&start==1){
                    printf("- x");
                }
                else if(arr[in]==1&&start == 1){
                   printf("+ x");
                }
                else if(arr[in]<1&&start==1){
                    printf("- %lldx",-arr[in]);
                }
                else if(arr[in]<1&&start==0){
                    printf("-%lldx",-arr[in]);
                }
                else if(arr[in]>1&&start==0){
                    printf("%lldx",arr[in]);
                }
                else if(arr[in]>1&&start==1){
                    printf("+ %lldx",arr[in]);
                }

                start = 1;
            }
        in--;
        //cout<<in<<endl;
        if(arr[0]!=0){
             if(start = 1) printf(" ");
            if(arr[in]<0&&start==1){
                printf("- %lld",-arr[in]);
            }
            else if(arr[in]<0&&start==0){
                printf("-%lld",-arr[in]);
            }
            else if(arr[in]>0&&start==1){
                printf("+ %lld",arr[in]);
            }
            else{
                printf("%lld",arr[in]);
            }
            start = 1;
        }
        if(start == 0){
            cout<<"0";
        }
        cout<<endl;
    }
}
