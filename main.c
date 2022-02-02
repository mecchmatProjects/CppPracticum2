#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    printf("x=");
    scanf("%lf",&x);

    //[x]
    int z1 = (int) x;
    if(x<0){
        z1--;
    }
    printf("[%lf]=%d\n",x,z1);

    //{x}
    double fp_x = x - z1;
    printf("{%lf}=%lf\n",x,fp_x);

     //]x[
    int z2 = (int) x;
    if(x>=0){
       if(fp_x>0)
        z2++;
    }
    printf("]%lf[=%d\n",x,z2);

    //using math
    int zm1 = floor(x);
    double fp_x1 = x - zm1;
    int zm2 = ceil(x);

    printf("[%lf]=%d, {%lf}=%lf, ]%lf[=%d",x,zm1,x,fp_x1,x,zm2);

}
