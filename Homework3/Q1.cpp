/* Q1. Overloading Functions
Takes a string s or int i, returns true if characters/digits
are in ascending order and false otherwise */

#include <string>
#include <iostream>
#include "Q1.h"

using namespace std;

bool isOrdered(string s){
	std::string str = s;
	if(str == ""){
		return true;
	}

	for (int i = 0; i < (str.length() - 1); ++i){
		if(s[i] > s[i+1]){
			return false;
		}
	}
	return true;
}

bool isOrdered(unsigned int i){
	std::string new_str = std::to_string(i);
	//cout << new_str << endl;	
	
	return isOrdered(new_str);
}
