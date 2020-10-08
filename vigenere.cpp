#include <iostream>
#include <string>
#include <cctype>
#include "viginere.h"
#include "caesar.h"

std::string encryptViginere(std::string text, std::string keyword){
	std::string ans;
	int index = 0;
	for(char x : text){
		ans += shiftChar(x,(int)(keyword[index%keyword.size()])-97);
		if(isalpha(x)) index++;
	}
	return ans;
}