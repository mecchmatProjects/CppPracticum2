#include <stdio.h>
#include <math.h>

int main2(){
    float a,b,c;
    printf("a,b:\n");
    scanf("%f %f",&a,&b);
    c = hypot(a,b); // c = sqrt(a*a+b*b);
    printf("c=%g",c);
    return 0;
}

