#include <iostream>

class Stack {
private:
  int *p_list;
  int size;
  int MAX_SIZE;
public:
  Stack (int MAX_SIZE=1000);
  ~Stack ();
  int find_index(int _item);
  void push(int _item);
  int pop();
  void print();
  int get_size();
  int get_item(int _index);
};

//member function definition
Stack::Stack (int MAX_SIZE){
  p_list =  new int [MAX_SIZE];
}
Stack::~Stack (){
  delete [] p_list;
}
int Stack::find_index(int _item) {
  int index =0;
  for (int i = 0; i < size; i++) {
    index = i;
    if (_item==p_list[index]) {
      return index;
    }
  }
  index =-1;
  return index;
}
void Stack::push(int _item){

}
int Stack::pop(){
  return 0;

}
void Stack::print(){

}
int Stack::get_size(){
return 0;
}
int Stack::get_item(int _index){
return 0;
}

int main() {
  Stack s1;


  return 0;
}
