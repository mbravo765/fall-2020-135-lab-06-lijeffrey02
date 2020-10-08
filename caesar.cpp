#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

char shiftChar(char input,int shift){
	if(islower(input)){
		return (char)((((int)input+shift%26+33)%26)+97);
	}
	else if(isupper(input)){
		return (char)((((int)input+shift%26+39)%26)+65);
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
