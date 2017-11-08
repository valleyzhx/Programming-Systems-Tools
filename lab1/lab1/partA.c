#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){

 double x = 2.55;
 double result1 = 3*pow(x,3)-5*pow(x,2)+6;
 double result2 = (3.31*pow(10,-8)*2.01*pow(10,-7))/(7.16*pow(10,-6)+2.01*pow(10,-8));
    printf("3*2.55^3 - 5*2.55^2 + 6 = %lf\n",result1);
    printf("(3.31*10^-8*2.01*10^-7) / (7.16*10^-6 + 2.01*10^-8) = %lf\n",result2);
 return 0;
 
}
