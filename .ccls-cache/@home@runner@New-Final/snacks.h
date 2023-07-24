#include <string>
#include "criminal.h"
using namespace std;

class Snack {
private:
  string name;
  string description;
  int powerBoost;

public:
 
  string getName()  { return name; }

  string getDescription()  { return description; }

  int getPowerBoost()  { return powerBoost; }

void set_everything (string Name = "snacks", string Description = "empty", int PowerBoost = 0){
  name = Name;
  description = Description;
  powerBoost = PowerBoost;
    }
};


