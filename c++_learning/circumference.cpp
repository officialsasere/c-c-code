#include <iostream>
#include <chrono>
#include <limits>
using namespace std;

int main (){
  cout << "Program starting..." << endl;
      auto start = chrono::steady_clock::now();

  // Program to calculate the circumference of a circle (C = 2 * PI * r), where PI is 3.14159265359

  const double PI = 3.14159265359;
  double r ;
  cout << "Enter circle radius: ";

  while(!(cin >> r)){
    cout <<"Invalid number, Please enter a number\n"; 
    cout << "Enter circle radius: ";

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  double circumference = 2 * PI * r ;
  auto end = chrono::steady_clock::now();
  cout << "The circumference of the circle is "<< circumference << "cm" << endl;
  auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    
    std::cout << "Execution time: " << duration.count() << " ms" << std::endl;

  return 0;
}