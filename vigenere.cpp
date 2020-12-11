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

//maybe you could add more comments about what the for loop above is intended to do or other
//things that would give you more information what the purpose of this function is
//I think it would be better if you "index++" after the if statement because it would make
//it easier to read
		if(isalpha(x)) index++;
	}
	return ans;
}
