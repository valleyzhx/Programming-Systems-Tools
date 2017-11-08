#include <stdio.h>


int main(int argc, const char * argv[]){
    
    int first_result = 365+7-365%7;
    
    int second_result = 12258 + 28 - 12258%28;
    
    int third_result = 996 + 4 - 996%4;
    
    printf("365 + 7 - 365%%7 = %d\n",first_result);
    
    printf("12258 + 28 - 12258%%28 = %d\n",second_result);
    
    printf("996 + 4 - 996%%4 = %d\n",third_result);
    
    return 0;
    
}
