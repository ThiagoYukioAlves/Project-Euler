#include <stdint.h>
#include <stdio.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ? */

int main(){
	uint64_t primeFactor = 1;
	uint64_t largestFactor = 1;
	uint64_t number = 600851475143;

	for(primeFactor = 1; primeFactor <= number; primeFactor++){
		if(number % primeFactor == 0){
			number /=primeFactor;
			largestFactor = primeFactor;
		}
	}

	printf("The largest prime factor of 600851475143 is:  %lu \n", largestFactor);

	//getch();
	return 0;
}