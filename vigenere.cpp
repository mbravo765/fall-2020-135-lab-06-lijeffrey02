#include <iostream>
#include <string>
#include <cctype>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string text, std::string keyword){
	std::string ans;
	int index = 0;
	for(char x : text){
		ans += shiftChar(x,(int)(std::tolower(keyword[index%keyword.size()])-97));
		if(isalpha(x)) index++;
	}
	return ans;
}