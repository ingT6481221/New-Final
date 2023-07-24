#include <string>
#include <iostream>
#include "node.h"
#include "stack.h"
#include "queue.h"

using namespace std;
class Detective{
private : string name;
         int power;
bool isdead;

public :
 string getName()  { return name; }

  int getPower()  { return power; }
  bool isDead(){return isdead;}

 void set_name(string Name = "Player"){
    name=Name; 
  }
void set_power(int Power=10){
   power=Power;
  
}
void increasepower(Stack &l){
 NodePtr t=l.getTop();
int F = t->get_value();
  power+=F;
};

void Compare(Queue &Q, Stack &l){
  NodePtr head = Q.getheadPtr();
  int Cpower = head->get_value();
  if(Cpower > power){
     isdead = true;
  }
  else{
    cout << "Criminal " << Q.dequeue() << " has been slain" << endl;
     isdead = false;
  }
  
};


};
