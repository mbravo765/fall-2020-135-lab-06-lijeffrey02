#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"

// add your tests here

TEST_CASE("Caesar"){
	CHECK(encryptCaesar("A Light-Year Apart",5) == "F Qnlmy-Djfw Fufwy");
}
TEST_CASE("Viginere"){
	CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
}
