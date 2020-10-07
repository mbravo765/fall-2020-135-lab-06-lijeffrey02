#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

char shiftChar(char input,int shift){
	int x = (int)input;
	if(islower(input)){
		return (char)(((x+shift-97)+26) % 26 + 97);
	}
	else if(isupper(input)){
		return (char)(((x+shift-65)+26 )% 26 + 65);
	}
	else return input;
}

std::string encryptCaesar(std::string text,int shift){
	std::string ans;
	for(char x : text){
		ans += shiftChar(x,shift);
	}
	return ans;
}
