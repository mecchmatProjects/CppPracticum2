#include <stdio.h>
#include <math.h>

double th(double x);

double th_derivative(double x);

int main(){
    printf("%lf, %lf\n",th(0), th_derivative(0));
    printf("%lf, %lf\n",th(1), th_derivative(1));
    printf("%lf, %lf\n",th(-1), th_derivative(-1));
}

double th(double x){
    double e_x = exp(x);
    double e_xm = 1 / e_x;
    return (e_x - e_xm)/(e_x + e_xm);
}

double th_derivative(double x){
    double tmp = cosh(x);
    return 1 / tmp / tmp;
}


