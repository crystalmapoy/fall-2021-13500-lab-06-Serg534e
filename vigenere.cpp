#include <iostream>
#include"vigenere.h"
#include "caesar.h"
#include <cctype>

std:: string encryptVigenere(std:: string plaintext, std::string keyword){
  int counter=0;
  std:: string result;
  for(int i =0; i<plaintext.length();i++){
    if(isalpha(plaintext[i])){
      result+=shiftChar(plaintext[i],keyword[counter]-97);
      counter++;
    }
    else
      result+=plaintext[i];
    if(counter>=keyword.length())
      counter=0;

  }

  return result;
}
