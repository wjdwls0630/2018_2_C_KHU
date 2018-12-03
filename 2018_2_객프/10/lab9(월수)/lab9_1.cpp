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
  void print() const;
  int get_size() const;
  int get_item(int _index) const;
};

//member function definition
Stack::Stack (int MAX_SIZE){
  this->p_list =  new int [MAX_SIZE];
  this->size=0;
  this->MAX_SIZE=MAX_SIZE;
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
  if (find_index(_item)==-1) {
    p_list[size]=_item;
    size++;
  }

}
int Stack::pop(){
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



int main() {
  Stack s1(5);

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
  std::cout << "where is 4 ? : " <<s1.find_index(4)<< '\n';



  return 0;
}
