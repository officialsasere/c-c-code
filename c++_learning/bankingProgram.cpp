//Deposit, withdral, checkbalance, sendmoney, recieve money
//type h for help, 

#include <iostream>

int main(){

double bal = 00.00;

char input;
std::cout<< "Welcome to money bank! \n";
std::cout<< "To withdral enter w \n To Deposit enter d \n To checkbalance enter c : \n";
std::cin >> input;

switch(input){
  case 'd':
    deposit(bal);
    break;

  case 'w':
    withdral(bal);
    break;
  case 'c':
    showBalance(bal);
    break;
  default:
    std::cout << "You have enter an invalid action";
    std::cout<< "To withdral enter w \n To Deposit enter d \n To checkbalance enter c : \n";
    return 1;
}



  return 0;
}

double deposit( double bal){
  double depo;
    std::cout<< "Please input deposit amount:  \n";
    std::cin >> depo;
    return bal + depo ;

}
double  withdral( double bal){
  double withdral;
   std::cout<< "Please input Withdral amount:  \n";
    std::cin >> withdral;
    return bal - withdral ;
}
double showBalance( double bal){
  
 std::cout<< "Please input Withdral amount:  \n";
    std::cin >> withdral;
    return bal - withdral ;
}