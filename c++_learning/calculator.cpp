#include <iostream>

int main(){
double num1, num2, result;
char op;

std::cout << "Enter expression e.g(10 + 4)"<< std::endl;
std::cin>> num1 >> op >> num2;

switch(op){
  case '+':
  result = num1 + num2;
    std::cout<< num1<< " "<< op << " "<< num2 << " = " << result;
    break;

  case '-':
  result = num1 - num2;
    std::cout<< num1<< " "<< op << " "<< num2 << " = " << result;
    break;

  case '*':
  result = num1 * num2;
    std::cout<< num1<< " "<< op << " "<< num2 << " = " << result;
    break;

  case '/':

    if (num2 == 0) {
      std::cout<< "You can't divide with zero";
      return 1;
    }else {
      result = num1 / num2;
    }
    std::cout<< num1<< " "<< op << " "<< num2 << " = " << result;
    break;
  default:
    std::cout<< "You have entered an invalid operand, please enter either of (+.-,*,/)";
    return 1;


}


  return 0;
}