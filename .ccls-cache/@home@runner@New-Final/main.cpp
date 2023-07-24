#include <iostream>
#include "criminal.h"
#include "detective.h"
#include "snacks.h"

using namespace std;
Stack l;
Queue Q;

int getRandom(){
  int lb = 0, ub = 4;
  int num = 0;
  num = rand() % (ub - lb + 1);
  return num;
}
int main() {
  cout << "Welcome to Snack Detective the Game" << endl << endl;
  cout << "Premise: You play as a detective that starts with 0 power and have to eat snacks to gain more powers to fight against the criminals!" << endl << endl;
  cout << "Please enter your cool name:"<<endl;
  //Player
string player;
  cin>>player;
  Detective *D = new Detective;
  D->set_name(player);
 cout<<" Player:"<<D->getName()<<"    "<<" Power:"<<D->getPower()<<endl;

  
//Criminals parts
  
int criminals;
int power;

cout <<  " Please enter numbers of criminals:" << endl; 
  cin>> criminals;
    Criminal *A = new Criminal[criminals];
  for (int i = 0; i <criminals; i++) {
    string name;
    cout << "Enter the name of criminal " << ": ";
    cin >> name;
    A[i].set_name(name);

    cout << "Enter the power of criminal " << ": ";
    cin >> power;
    A[i].set_power(power);
  }

    for(int i=0;i<criminals;i++){
    cout<<"Name : "<<A[i].getName()<<"     "<<"Power:"<< A[i].getPower()<<endl;
    Q.enqueue(A[i].getPower(), A[i].getName());
    }

Snack *snacks = new Snack[5];

    // Placeholder for snack

  snacks[0] .set_everything("M&M", "Sweet but not good for health", 10);
  snacks[1].set_everything("Nutrition Bar", "Healthy and sweet", 15);
  snacks[2] .set_everything("Apple slices", "Good for health but little flavour", 8);
  snacks[3].set_everything("Cookie", "Just sweet", 12);
  snacks[4].set_everything("Potato Chips", "Salty and full with air", 6);

  cout << "\nSnacks:\n";
  for (int i = 0; i < 5 ; i++) {
    cout << i << " Name: " << snacks[i].getName() << endl
    << "   Description: " << snacks[i].getDescription() << endl;
  }

  
bool isfirst = true;
while(Q.get_size() != 0){
  //cout << "q size " << Q.get_size()<<endl;
  int random =getRandom();
cout<<"WOW! You've got:"<<" "<<snacks[random].getName()<<"   "<<endl<<"Power:"<<snacks[random].getPowerBoost()<<endl<<"from random!"<<endl;
  
  l.push(snacks[random].getPowerBoost()); 
  D->increasepower(l);  //increase power of detective from random candy
  
  cout << "detective power is now " << D->getPower() << endl;
  if(isfirst == true){
    cout << "type anything to start fighting: "<< endl;
    int a;
    cin >> a;
  }
  isfirst = false;
  
  if(D->isDead() == false)
    D->Compare(Q,l);
  else if(D->isDead() == true)
    break;  
}
  
  if(D->isDead() == true){
    cout << "you've lose the game" << endl;
  }
  else if(D->isDead() == false){
    cout << "you've won" << endl;
  }
}
