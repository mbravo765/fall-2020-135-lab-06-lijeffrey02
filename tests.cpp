#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"

// add your tests here

TEST_CASE("Caesar"){
	CHECK(encryptCaesar("A Light-Year Apart",5) == "F Qnlmy-Djfw Fufwy");
	CHECK(encryptCaesar("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz @[`{",3) == "DEFGHIJKLMNOPQRSTUVWXYZABC defghijklmnopqrstuvwxyzabc @[`{");
}
TEST_CASE("Vigenere"){
	CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz @[`{","zyxwvutsrqponmlkjihgfedcba") == "ZZZZZZZZZZZZZZZZZZZZZZZZZZ zzzzzzzzzzzzzzzzzzzzzzzzzz @[`{");
}
TEST_CASE("Decrypt"){
	CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy",5) == "A Light-Year Apart");
	CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
}
TEST_CASE("Loop"){
	CHECK(decryptCaesar(encryptCaesar("Hi There!!",20),20) == "Hi There!!");
}
TEST_CASE("Decode"){
	CHECK(decode(encryptCaesar("Hi There, how are you doing today!!",20)) == "Hi There, how are you doing today!!");
	CHECK(decode(encryptCaesar("Hi There, how are you doing today!!",15)) == "Hi There, how are you doing today!!");
	CHECK(decode(encryptCaesar("Hi There, how are you doing today!!",16)) == "Hi There, how are you doing today!!");
	CHECK(decode(encryptCaesar("Hi There, how are you doing today!!",4)) == "Hi There, how are you doing today!!");
	CHECK(decode(encryptCaesar("Hi There, how are you doing today!!",0)) == "Hi There, how are you doing today!!");
	CHECK(decode(encryptCaesar("Hi There, how are you doing today!!",200)) == "Hi There, how are you doing today!!");
}