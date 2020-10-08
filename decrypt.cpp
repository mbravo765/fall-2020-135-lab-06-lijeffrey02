#include <iostream>
#include <string>

#include "viginere.h"
#include "caesar.h"

std::string decryptCaesar(std::string text,int shift){
	return encryptCaesar(text,26-shift);
}

std::string decryptVigenere(std::string text, std::string keyword){
	// std::string newkeyword;
	// for(char x : keyword){
	// 	newkeyword += shiftChar(x,26-(int)(x)-97);
	// }
	// return encryptViginere(text,newkeyword);
	std::string ans;
	int index = 0;
	for(char x : text){
		ans += shiftChar(x,26-(int)(keyword[index%keyword.size()])-97);
		if(isalpha(x)) index++;
	}
	return ans;
}