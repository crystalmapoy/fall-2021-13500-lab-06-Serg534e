#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("shiftChar tests"){
  CHECK(shiftChar('Z',2)=='B');
  CHECK(shiftChar('S',5)=='X');
  CHECK(shiftChar('A',1)=='B');
}
TEST_CASE("encryptCaesar empty strings"){
  CHECK(encryptCaesar("",5)=="");
  CHECK(encryptCaesar("",10)=="");
}
TEST_CASE("encryptCaesar - general cases. Lower/uppercase- Nonalphabetical"){
  CHECK(encryptCaesar("abCdE bC!$",3)=="deFgH eF!$");
  CHECK(encryptCaesar("10101100101",12)=="10101100101");
  CHECK(encryptCaesar("Palindrome",24)=="Nyjglbpmkc");
}
TEST_CASE("encryptVigenere tests"){
  CHECK(encryptVigenere("","")=="");
  CHECK(encryptVigenere("go to market","zen")=="fs gn qnqors");
  CHECK(encryptVigenere("!!!!!3123Five","ok")=="!!!!!3123Tsjo");
  CHECK(encryptVigenere("Same statement","a")=="Same statement");
  CHECK(encryptVigenere("words","words")=="scigk");
}
TEST_CASE("decryptCaesar tests"){
  CHECK(decryptCaesar("Nyjglbpmkc",24)=="Palindrome");
  CHECK(decryptCaesar("rOvVy, GybVn!",10)=="hElLo, WorLd!");
}
TEST_CASE("decryptVigenere tests"){
  CHECK(decryptVigenere("fs gn qnqors","zen")=="go to market");
  CHECK(decryptVigenere("Same statement","a")=="Same statement");
  CHECK(decryptVigenere("scigk","words")=="words");
}

// add your tests here
