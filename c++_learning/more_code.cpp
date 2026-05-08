#include <iostream>
#include <limits>

int main(){
  //type conversion involves converting a variable of one data type to another
  //Implicit = automatic
  char number = 100; // here a number is implicitky converted into a character, instead of using int, char is used.

  //Explicit =Precede value with new data type
  int naira = (double)10.0;  // here an int is explicitly converted into a double




  // USER INPUT 

  // std::string name;
  // std::cout << "What is your name: ";
  //to get a inout with space use getline, ws-white space
  // std::getline(std::cin >> std::ws, name);
  // std::cout << "Hello " << name << " Welcome to Nvidia. ";


  //MATH FUNCTION:

  // double x = 4;
  // double y = 5;

  // double z;

  // z = std::max(x,y);
  // z = std::min(x,y);
  // z = std::sqrt(x);
  // z = std::pow(x,2);
  // we have round(), ceil(), floor(), abs()

  // std::cout << z << std::endl; 


  // Calcucate the hypoteneus of a right angled triangle
double a;
double b;
double c;

std::cout << "Enter side A: ";
 while(!(std::cin >> a)){
    std::cout <<"Invalid number, Please enter a number\n"; 
    std::cout << "Enter side A: ";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  

std::cout << "Enter side B: ";

 while(!(std::cin >> b)){
    std::cout <<"Invalid number, Please enter a number\n"; 
    std::cout << "Enter side B: ";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }


c = sqrt(pow(a,2) + pow(b, 2) );

std::cout << "The answer is: "<< c << std::endl;


  return 0;
}