/* Q3. Recursion
Takes int i, uses recursion to return true if i is prime
and false otherwise */

#include "Q3.h"

using namespace std;

bool checkPrime(unsigned int i, int divisor){
	bool rest;
	if (divisor == 1){
		return true;
	}else{
		rest = checkPrime(i, divisor - 1);
		if (rest == false){
			return false;
		}else{
			return rest && (i % divisor != 0);
		}
	}
}


bool isPrime(unsigned int i){
	int divisor = 0;
	divisor =  i - 1;
	if (i < 2){
		return false;
	}else{
		return checkPrime(i, divisor);
	}
}
