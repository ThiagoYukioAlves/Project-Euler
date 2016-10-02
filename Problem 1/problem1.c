#include <stdint.h>

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

void main(){
    uint32_t sum = 0;
    uint16_t number;

    for(number = 0; number < 1000; number+= 3){
        sum += number;
    }

    for(number = 0; number < 1000; number+= 5){
        sum += number;
    }

    for(number = 0; number < 1000; number+= 15){
        sum -= number;
    }

    printf("Total sum: %lu \n", sum);
    getch();

    return;
}
