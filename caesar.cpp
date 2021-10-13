#include <iostream>
#include "caesar.h"
#include <cctype>
char shiftChar(char c, int rshift){
  if(c>=65 && c<=90){
    if(c+rshift>90){
      while(rshift>0){
        if(c>90)
          c = 65;
        c++;
        rshift--;
      }
    }
    c +=rshift;
  }
  else if(c>=97 && c<=122){
    if(c+rshift>122){
      while(rshift>0){
        if(c>122)
          c = 97;
        c++;
        rshift--;
      }
    }
    c+=rshift;
  }
  return c;
}

std:: string encryptCaesar(std:: string plaintext, int rshift){
  std:: string result;
  for(int i =0; i<plaintext.length(); i++){
    result+=shiftChar(plaintext[i],rshift);
  }
  return result;
}
