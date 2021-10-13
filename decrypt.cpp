#include <iostream>
#include "caesar.h"
#include <cctype>
char shiftX(char c, int rshift){
  if(c>=65 && c<=90){
    if(c-rshift<65){
      c+=26;
    }
    c -=rshift;
  }
  else if(c>=97 && c<=122){
    if(c-rshift<97){
      c+=26;
    }
    c-=rshift;
  }
  return c;
}

std::string decryptCaesar(std:: string text, int rshift){
  std:: string result;
  char c;
  for(int i = 0; i <text.length();i++){
    c=text.at(i);
    if(c>=65 && c<=90){
      if(c-rshift<65){
        c+=26;
      }
      c -=rshift;
    }
    else if(c>=97 && c<=122){
      if(c-rshift<97){
        c+=26;
      }
      c-=rshift;
    }
    result+=c;
  }

  return result;
}
std::string decryptVigenere(std::string text, std:: string keyword){
  int counter=0;
  std:: string result;
  for(int i =0; i<text.length();i++){
    if(isalpha(text[i])){
      result+=shiftX(text[i],keyword[counter]-97);
      counter++;
    }
    else
      result+=text[i];
    if(counter>=keyword.length())
      counter-=keyword.length();

  }
  return result;
}
