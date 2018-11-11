#include <iostream>

class Stack {
private:
  int *p_list;
  int size;
  int MAX_SIZE;
  static int numStacks;
public:
  Stack (int MAX_SIZE=1000);
  ~Stack ();
  int find_index(int _item);
  void push(int _item);
  int pop();
  void print() const;
  int get_size() const;
  int get_item(int _index) const;
  static int get_num_stacks();
};

//Initialize the static variables

int Stack::numStacks=0;

//member function definition
Stack::Stack (int MAX_SIZE){
  this->p_list =  new int [MAX_SIZE];
  this->size=0;
  this->MAX_SIZE=MAX_SIZE;
  numStacks++;
}
Stack::~Stack (){
  delete [] p_list;
  numStacks--;
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
  if (size==MAX_SIZE) {
    std::cout << "Error: out of memory" << '\n';
  } else if (find_index(_item)==-1) {
    p_list[size]=_item;
    size++;
  }

}
int Stack::pop(){
  if (size==0) {
    std::cout << "Error : No items exists in the list" << '\n';
    return 0;
  }
  int result=p_list[size-1];
  size--;
  return result;
}
void Stack::print() const {
  for (int i = 0; i < size; i++) {
    std::cout << p_list[i] << ' ';
  }
  std::cout  << '\n';

}
int Stack::get_size() const {
  return size;
}
int Stack::get_item(int _index) const {
  return p_list[_index];
}

int Stack::get_num_stacks(){
  return numStacks;
}



int main() {
  Stack s1(5);
  Stack *ps;
  std::cout << "Number of created objects : " <<Stack::get_num_stacks()<< '\n';
  ps= new Stack;
  std::cout << "After ps = new Stack, Number of created objects : " <<Stack::get_num_stacks()<< '\n';
  std::cout << "There is no item in list and use pop()" << '\n';
  s1.pop();
  std::cout << "push the item to list" << '\n';
  s1.push(1);
  s1.push(2);
  s1.push(4);
  s1.push(3);
  s1.push(2);
  std::cout << "s1의 객체 정보" << '\n';
  std::cout << "size : " <<s1.get_size()<< '\n';
  s1.print();
  std::cout << "index 1 = " <<s1.get_item(1)<< '\n';
  std::cout << "pop : " <<s1.pop()<< '\n';
  s1.print();
  std::cout << "push more than MAX_SIZE" << '\n';
  s1.push(8);
  s1.push(9);
  s1.push(12);
  std::cout << "where is 4 ? : " <<s1.find_index(4)<< '\n';
  delete ps;
  std::cout << "After delete ps, Number of created objects : " <<Stack::get_num_stacks()<< '\n';

  return 0;
}
