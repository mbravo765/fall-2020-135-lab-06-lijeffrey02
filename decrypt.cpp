#include <iostream>
#include <string>

#include "viginere.h"
#include "caesar.h"

std::string decryptCaesar(std::string text,int shift){
	return encryptCaesar(text,-1*shift);
}

std::string decryptVigenere(std::string text, std::string keyword){
	std::string ans;
	int index;
	for(char x: text){
		ans += shiftChar(x, 26 - (int)keyword[index%keyword.size()-97]);
		if(isalpha(x))index++;
	}
	return ans;
}