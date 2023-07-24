#ifndef criminals_h
#define criminals_h

#include <string>
#include <iostream>
using namespace std;

class Criminal {
private:
  string name;
  int power;

public:
  
  void set_name(string Name = "Criminals"){
    name=Name; 
  }
void set_power(int Power=0){
   power=Power;
  
}
  string getName()  { return name; }

  int getPower()  { return power; }
};

void fightCriminal(int detectivePower, int criminalPower) {
  if (detectivePower > criminalPower) {
    cout << "Congratulations! You defeated the criminal!" << endl;
  } else if (detectivePower < criminalPower) {
    cout << "Oh no! The criminal was too powerful. Better luck next time!" << endl;
  } else {
    cout << "It's a tie! You couldn't defeat the criminal. Better luck next time!" <<endl;
  }
}


#endif