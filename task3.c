#include <stdio.h>
#include <math.h>

double area(double a, double b, double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void main3(){
  double a,b,c;
  printf("a,b,c:\n");
  scanf("%lf %lf %lf",&a,&b,&c);

  printf("%lf==0, %lf==30, %lf==%lf\n",area(2,1,1),area(3,4,5), area(1,1,1),sqrt(3)/4);

  double square = area(a,b,c);
  printf("square of triangle is %lf",square);
}
