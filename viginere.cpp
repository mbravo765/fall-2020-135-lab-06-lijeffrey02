#include <iostream>
#include <cctype>
#include "viginere.h"
#include "caesar.h"


std::string encryptVigenere(std::string plaintext, std::string keyword){
	std::string ans;
	int index = 0;
	for(char x : plaintext){
		ans += shiftChar(x,(int)(keyword[index%keyword.size()])-97);
		if(isalpha(x)) index++;
	}
	return ans;
}