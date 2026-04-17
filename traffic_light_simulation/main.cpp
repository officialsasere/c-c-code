#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
using namespace std;


enum TrafficLightState {
  RED,
  YELLOW,
  GREEN
};

void timer(int seconds){

  Sleep(1000);
  while(seconds >= 1 ){
cout<< "\r" <<seconds << flush;
Sleep(1000);
seconds--;
  }
  cout << endl;
} 

int main() {
  TrafficLightState currentState = RED;

  while(true){
    switch(currentState) {
      case RED:
      cout << "\n🔴 Red Light\n";  
       timer(10);  
      currentState = YELLOW;
      break;
      case YELLOW:
      cout << "\n🟡 Yellow Light\n";
       timer(5);
       currentState = GREEN;
       break;
      case GREEN:
      cout << "\n🟢 Green Light\n";
       timer(10);
       currentState = RED;
       break;

    }
  }

  return 0;
}