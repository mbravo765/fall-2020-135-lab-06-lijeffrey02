#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "decrypt.h"
#include "viginere.h"

// add your tests here

TEST_CASE("Caesar"){
	CHECK(encryptCaesar("A Light-Year Apart",5) == "F Qnlmy-Djfw Fufwy");
}