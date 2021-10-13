#include <iostream>
void testAscii(std:: string x);
bool iequals(std:: string a, std:: string b);

int main(){
  std:: string s1 = "abcD";
  std:: string s2  = "ABC";
  if(iequals(s1,s2)){
    std::cout<<"true";
  }
  else
    std::cout<<"false";
  testAscii("test 12 x");
}
void testAscii(std:: string x){
  for(int i =0; i<x.length(); i++){
    std::cout<<x[i] <<" "<< (int)x[i] << "\n";
  }
}
bool iequals(std:: string a, std:: string b)
{
    int sz = a.size();
    if (b.size() != sz)
        return false;
    for (int i = 0; i < sz; ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}
