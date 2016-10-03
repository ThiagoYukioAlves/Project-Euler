#include <stdint.h>
#include <stdio.h>

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */


int main(){
	uint8_t palindromeTest(uint32_t number);
	uint16_t factor1, factor2;
	uint32_t product;
	uint32_t largestPalindrome = 0;
	uint8_t foundIt = 0;

	for(factor1 = 999; factor1 > 99 && foundIt == 0; factor1--)
		for(factor2 = 999; factor2 > 99 && foundIt == 0; factor2--){
			product = factor1 * factor2;

			if (palindromeTest(product)){
				largestPalindrome = product;
				foundIt = 1;
			}
		}

	printf("The largest palindrome is:  %u \n", largestPalindrome);

	//getch();
	return 0;
}



// Test if a number is a palindrome
uint8_t palindromeTest(uint32_t number){

	return 1;
}