#include <iostream>


namespace first{
  int x = 3;
}
namespace second{
  int x = 4;
}

int main(){
  using namespace first;
  //Namespace provide solution for preventing naming conflicts in large projects. Each entity needs a unique name.
  // A namespace allow for identically named entities as long as the namespace are different.

std::cout << x << std::endl;
  return 0;
}