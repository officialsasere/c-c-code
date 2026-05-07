#include <iostream>

// typedef std::string text_t;
using text_t = std::string;


int main (){
  //typedef is a reserved keyword use to create an additional name (alias) for another data type
  //New identifier for an existing data type
  //Helps to reduce typo and increase readability.
  //Use when there is a clear benefit
  //typedef have been replaced with the using keyword because it works better with template

  text_t name = "Nuel";
  std::cout << name << std::endl;

  return 0;
}