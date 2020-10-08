#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"

// add your tests here

TEST_CASE("Caesar"){
	CHECK(encryptCaesar("A Light-Year Apart",5) == "F Qnlmy-Djfw Fufwy");
	CHECK(encryptCaesar("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz @[`{",3) == "DEFGHIJKLMNOPQRSTUVWXYZABC defghijklmnopqrstuvwxyzabc @[`{");
}
TEST_CASE("Viginere"){
	CHECK(encryptViginere("Hello, World!","cake") == "Jevpq, Wyvnd!");
	CHECK(encryptViginere("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz @[`{","zyxwvutsrqponmlkjihgfedcba") == "ZZZZZZZZZZZZZZZZZZZZZZZZZZ zzzzzzzzzzzzzzzzzzzzzzzzzz @[`{");
}
TEST_CASE("Decrypt"){
	CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy",5) == "A Light-Year Apart");
	CHECK(decryptViginere("Jevpq, Wyvnd!","cake") == "Hello, World!");
}
// TEST_CASE("Loop"){
// 	CHECK(decryptCaesar(encryptCaesar("Hi There!!",20),20) == "Hi There!!");
// }