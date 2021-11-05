#include <stdio.h>
#include<math.h>
int main()
{
    double a,b,o,sub,sum,m,d;

    printf("Inpute First number\n");

    scanf("%lf", &a);

    printf("Inpute Secound number\n");

    scanf("%lf", &b);

    //printf("Chose your oprator for multiplaction:0,Divi:1\n");
    m=a*b;
    d=a/b;

    printf("Multiplication:%d and Divi:%d\n",m,d);

   // scanf("%lf",o);

        //if(o==0){
            //printf("Multiplication:%d\n",m);
            }
       // else if(o==1){
           // printf("Divi:%d\n",d);
         //   }
        //else{
                //    printf("wrong");
           // }
    return 0;
}
