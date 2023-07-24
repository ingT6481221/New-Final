
#include <string>
#define  node_h
using namespace std;
class NODE{
	int data;
  string criminal;
	NODE *nextPtr;
public:
	NODE(char);
	~NODE();
  int get_value();
void setCriminalName(string input){
  criminal = input;
}
 string get_criminal(){return criminal;}

	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(char x){
	data=x;
	nextPtr=NULL;
}

int NODE::get_value(){
	return data;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 //cout<<"dying " <<data<<endl;

}