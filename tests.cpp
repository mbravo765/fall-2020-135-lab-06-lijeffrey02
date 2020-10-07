#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"

// add your tests here

TEST_CASE("Caesar"){
	CHECK(encryptCaesar("A Light-Year Apart",5) == "F Qnlmy-Djfw Fufwy");
	CHECK(encryptCaesar("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz @[`{",1) == "BCDEFGHIJKLMNOPQRSTUVWXYZA bcdefghijklmnopqrstuvwxyza @[`{");
}
TEST_CASE("Viginere"){
	CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz @[`{","zyxwvutsrqponmlkjihgfedcba") == "ZZZZZZZZZZZZZZZZZZZZZZZZZZ zzzzzzzzzzzzzzzzzzzzzzzzzz @[`{");
}
TEST_CASE("Decrypt"){
	CHECK(encryptCaesar("F Qnlmy-Djfw Fufwy",5) == "A Light-Year Apart");
// 	CHECK(encryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
}