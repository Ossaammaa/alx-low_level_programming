#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
        int n;
        int LD;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        LD = n % 10;
        printf("Last digit of %i is %i " , n , LD);
        if (LD > 5) {
        printf("and is greater than 5\n");
        }else if (LD == 0){
        printf("and is 0\n");
        }else {
        printf("and is less than 6 and not 0\n");
        }
        return (0);
}
