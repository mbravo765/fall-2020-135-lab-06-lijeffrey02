#include <iostream>
#include <cmath>

#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"

int repeat(std::string input, char c){
	int ans = 0;
	for(int i = 0; i < input.size();i++){
		if(input[i] == c) ans++;
	}
	if(!islower(c)) return 0;
	else return ans;
}

double distance(std::string input){
	double freq [26] = {8.2,1.5,2.8,4.3,13,2.2,2,6.1,7,.15,.77,4,2.4,6.7,7.5,1.9,.095,6,6.3,9.1,2.8,.98,2.4,.15,2,.074};
	double total = 0;
	for(int i = 0; i < 26; i++){
		total += pow(freq[i]-(repeat(input,(char)i+97)/input.size()*100),2);
	}
	return total;
}

std::string decode(std::string coded){
	int shift = 0;
	double min = 1000000000000000;
	std::string temp;
	for(int i = 0; i < coded.size();i++){
		temp += tolower(coded[i]);
	}
	for(int i = 0; i < 26; i++){
		if(min > distance(encryptCaesar(temp,i))){
			min = distance(encryptCaesar(temp,i));
			shift = i;
		}
	}
	return encryptCaesar(coded, shift);
}