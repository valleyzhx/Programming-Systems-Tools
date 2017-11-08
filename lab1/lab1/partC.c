#include <stdio.h>
#include <math.h>



int main(int argc, const char * argv[]){
    
    double x = 2.55;
    double result1 = 3*pow(x,3)-5*pow(x,2)+6;
    double result2 = (3.31*pow(10,-8)*2.01*pow(10,-7))/(7.16*pow(10,-6)+2.01*pow(10,-8));
    printf("Part A:\n------------------\n");
    printf("Double:\n");
    printf("3*2.55^3 - 5*2.55^2 + 6 = %lf\n",result1);
    printf("(3.31*10^-8*2.01*10^-7) / (7.16*10^-6 + 2.01*10^-8) = %lf\n",result2);

    printf("------------------\n");
    printf("Int:\n");
    printf("3*2.55^3 - 5*2.55^2 + 6 = %d\n",(int)result1);
    printf("(3.31*10^-8*2.01*10^-7) / (7.16*10^-6 + 2.01*10^-8) = %d\n",(int)result2);
    
    
    printf("------------------\n");
    printf("Char:\n");
    printf("3*2.55^3 - 5*2.55^2 + 6 = %c\n",(char)result1);
    printf("(3.31*10^-8*2.01*10^-7) / (7.16*10^-6 + 2.01*10^-8) = %c\n",(char)result2);
    printf("====================================================\n");

    
    int first_result_int = 365+7-365%7;
    int second_result_int = 12258 + 28 - 12258%28;
    int third_result_int = 996 + 4 - 996%4;
    
    printf("Part B:\n------------------\n");
    printf("Int:\n");
    printf("365 + 7 - 365%%7 = %d\n",first_result_int);
    
    printf("12258 + 28 - 12258%%28 = %d\n",second_result_int);
    
    printf("996 + 4 - 996%%4 = %d\n",third_result_int);
    printf("------------------\n");
    
    double first_result_double = (double)first_result_int;
    
    double second_result_double = (double)second_result_int;
    
    double third_result_double = (double)third_result_int;
    
    printf("Double:\n");
    printf("365 + 7 - 365%%7 = %lf\n",first_result_double);
    
    printf("12258 + 28 - 12258%%28 = %lf\n",second_result_double);
    
    printf("996 + 4 - 996%%4 = %lf\n",third_result_double);
    printf("------------------\n");
    
    
    char first_result_char = (char)first_result_int;
    
    char second_result_char = (char)second_result_int;
    
    char third_result_char = (char)third_result_int;
    
    printf("Char:\n");
    printf("365 + 7 - 365%%7 = %c\n",first_result_char);
    
    printf("12258 + 28 - 12258%%28 = %c\n",second_result_char);
    
    printf("996 + 4 - 996%%4 = %c\n",third_result_char);
    printf("------------------\n");
    
    
    
    return 0;
    
}
