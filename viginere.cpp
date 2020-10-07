#include <iostream>
#include "viginere.h"
#include "caesar.h"


std::string encryptVigenere(std::string plaintext, std::string keyword){
	std::string ans;
	int index;
	for(char x : plaintext){
		ans += shiftChar(x,(int)(keyword[index%keyword.size()])-97);
		if((int)x > 96 && (int)x < 123 || (int)x > 64 || (int)x < 91){
			index++;
		}
	}
	return ans;
}