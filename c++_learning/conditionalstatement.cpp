#include <iostream>

int main(){

  std:: string name;
  std::cout << "Please enter your name: ";
  std::cin >> name;

  std::cout<< "Welcome!"<< name ;


  int age;
   std::cout << " Please, enter your age: ";
   std::cin >> age;

   if (age >= 18 ) {
    std::cout << "Welcome to the site, " << name;
   }else {
    std::cout << "Site is blocked";
   }
  return 0;
}