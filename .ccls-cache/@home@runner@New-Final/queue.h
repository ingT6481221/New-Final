//#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int, string);
  string dequeue();
  int get_size(){return size;}
  NodePtr getheadPtr(){return headPtr;}
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;

  //while(size>0)
  for(i=0;i<n;i++)
    dequeue();
  
}
void Queue::enqueue(int x, string criminal) {
  NodePtr new_node = new NODE(x);
  new_node->setCriminalName(criminal);
  
 if(size==0){
   headPtr=new_node;
 }
  else{
    tailPtr->set_next(new_node);
  } // 1.Create
 // 2 Connect

// 3 change tail
  tailPtr=new_node;
++size; // 4.increase size
  
}

string Queue::dequeue() {
  string criminal;
  NodePtr t;
 if(headPtr){
   t=headPtr;
  // 1. Save the node to be deleted
  

    // 1.5 take the value out to value
    criminal=t->get_criminal();
    // 2. move (head)
   headPtr=headPtr->get_next();
   
    if(size==1) tailPtr=NULL;
    delete t; // 3. delete
   size--;
  }
  return criminal;
}