#include <iostream>
#include "funcs.h"
#include <string>

// add functions here

void test_ascii(std::string input){
	for(int i = 0; i < input.size(); i++)
		std::cout << input[i] << "\n";
}

