/* Q2. Loops, Functions
Takes two integers x and y, returns the least common multiple
of x and y */

#include <iostream>
#include "Q2.h"

using namespace std;

int lcm(int x, int y){
	const int num1 = x,
	    	  num2 = y;
	int count1 = 0,
	    count2 = 0,
	    current1 = x,
	    current2 = y;

	while(true){
		if(current1 == current2){
			return current1;
			break;
		}

		while(current1 < current2){
			count1 += 1;
			current1  = num1 * count1;
		}

		while(current2 < current1){
			count2 += 1;
			current2 = num2 * count2;
		}
	}
}		
