#include <iostream>

#include "vigenere.h"
#include "caesar.h"
#include "decrypt.h"

int main()
{
  std::cout<<"encryptCaesar('Hello, World!', 10) and encryptCaesar('Way to Go!', 5)\n";
  std::cout<<encryptCaesar("Hello, World!", 10)<<"\n";
  std::cout<<encryptCaesar("Way to Go!", 5)<<"\n";
  std::cout<<"encryptVigenere('Hello, World!', 'cake') and encryptVigenere('LMNOPQRS', 'b')\n";
  std::cout<<encryptVigenere("Hello, World!", "cake")<<"\n";
  std::cout<<encryptVigenere("LMNOPQRS", "b")<<"\n";
  std::cout<<"decryptCaesar('Rovvy,Gybven!',10) and ('ABC, ABC',1)\n";
  std::cout<<decryptCaesar("Rovvy, Gybvn!",10)<<"\n";
  std::cout<<decryptCaesar("ABC, ABC",1)<<"\n";
  std::cout<<"decryptVigenere('Jevpq, Wyvnd!','cake')\n";
  std::cout<<decryptVigenere("Jevpq, Wyvnd!","cake");
  return 0;
}
