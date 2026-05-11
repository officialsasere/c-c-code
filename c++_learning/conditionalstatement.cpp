#include <iostream>

int main(){

  // std:: string name;
  // std::cout << "Please enter your name: ";
  // std::cin >> name;

  // std::cout<< "Welcome!"<< name ;


  // int age;
  //  std::cout << " Please, enter your age: ";
  //  std::cin >> age;

  //  if (age >= 18 ) {
  //   std::cout << "Welcome to the site, " << name;
  //  }else {
  //   std::cout << "Site is blocked";
  //  }

  //Switch is an alternative to using many "else if" statementss

   char grade;
   std::cout<< "What is your grade letter: " ;
   std::cin >> grade;

   switch(grade) {
    case 'A':
      std::cout<< "You did great!";
      break;
    case 'B':
      std::cout<< "You did Good!";
      break;
    case 'C':
      std::cout<< "This is average!";
      break;
    case 'D':
      std::cout<< "This is Poor!";
      break;
    case 'E':
      std::cout<< "Next to failure";
      break;
    case 'F':
      std::cout<< "Failed!";
      break;

    default:
     std::cout << "Enter any of the grade letter A - F base on your grade";
   };
  return 0;
}