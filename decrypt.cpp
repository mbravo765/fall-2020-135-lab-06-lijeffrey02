#include <iostream>
#include <string>

#include "vigenere.h"
#include "caesar.h"

//can you explain why it wasn't necessary to include "decrypt.h" here?

std::string decryptCaesar(std::string text,int shift){
	return encryptCaesar(text,26-shift);
}

std::string decryptVigenere(std::string text, std::string keyword){
	std::string ans;
	int index = 0;
	char a;
	for (char x: text){
		a = std::tolower(keyword[index%keyword.size()]);
		ans += shiftChar(x,26-((int)a-97));
		if (isalpha(x)){
			index++;
		}
	}
	return ans;
}
