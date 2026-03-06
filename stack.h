
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(char);
    char pop();
    Stack();
    ~Stack();
    bool isEmpty(){return size == 0;}
    int fetch();
};


void Stack::push(char x){
  NodePtr new_node=new NODE(x);
  if(new_node){
        new_node->set_next(top);
        top = new_node;
        size++;   // Link to previous top, change the top, increase the size
   }
 else cout<<"Not enough memory"<<endl;
    
}

char Stack::pop(){ 
    if(size>0)
    {
        NodePtr t=top;
        int value;
        top=t->get_next(); 
        delete t;
        size--;
        return value;
	//be careful of the empty stack!!!
    }
    else{
        cout<<"Empty stack"<<endl;
        return -1;
    }
    }

Stack::Stack(){
    top=NULL;
    size=0;
    //initialize stack
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    while(size>0) pop();
}

int Stack::fetch(){
    return size;
}


#endif
