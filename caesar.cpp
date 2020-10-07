#include <iostream>
#include <string>
#include "caesar.h"

char shiftChar(char input,int shift){
	int x = (int)input;
	if(x > 96 && x < 123){//lower case
		return (char)((x+shift-96) % 26 + 96);
	}
	else if(x > 64 && x < 92){
		return (char)((x+shift-64) % 26 + 64);
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
