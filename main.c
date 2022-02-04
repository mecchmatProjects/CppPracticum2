#include <stdio.h>
#include <stdlib.h>
#include <math.h> // gcc main.c -lm -o task1
#include <task2.c> // very bad

double sh(double x){
    return cosh(x);
}

void task1(){
  double x;
   printf("x=");
   scanf("%lf",&x);

   printf("y=ch(%lf)=%lf",x,sh(x));
}


void main()
{
   task1();
   /*double x;
   printf("x=");
   scanf("%lf",&x);

   printf("y=ch(%lf)=%lf",x,cosh(x));
   //return 0;*/
}
