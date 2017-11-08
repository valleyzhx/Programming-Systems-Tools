#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <time.h>

#define count 32


void printBits(int number){
    int bits[count];
    printf("%d binary representation is:\n",number);
    for (int i=0; i<count; i++) {
        int last = number&1;
        bits[count-1-i] = last;
        number >>= 1;
        
    }
    for (int i=0; i<count; i++) {
        printf("%d",bits[i]);
        if (i%4==3) {
            printf(" ");
        }
    }
    printf("\n\n");
}

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int random = rand()%INT_MAX+rand()%INT_MIN;
    printBits(random);
    return 0;
}


