#include <iostream>
#include <vector>

class Stack {
private:
  std::vector<int> v_list;
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
  v_list.resize(MAX_SIZE);
  this->size=0;
  this->MAX_SIZE=MAX_SIZE;
}
Stack::~Stack (){}
int Stack::find_index(int _item) {
  int index =0;
  for (int i = 0; i < size; i++) {
    index = i;
    if (_item==v_list[index]) {
      return index;
    }
  }
  index =-1;
  return index;
}
void Stack::push(int _item){
  if (find_index(_item)==-1) {
    v_list[size]=_item;
    size++;
  }

}
int Stack::pop(){
  int result=v_list[size-1];
  size--;
  return result;
}
void Stack::print() const {
  for (int i = 0; i < size; i++) {
    std::cout << v_list[i] << ' ';
  }
  std::cout  << '\n';

}
int Stack::get_size() const {
  return size;
}
int Stack::get_item(int _index) const {
  return this->v_list.at(_index);
}



int main() {
  Stack s1(5);

  std::cout << "push the item to list" << '\n';
  s1.push(1);
  s1.push(2);
  s1.push(4);
  s1.push(3);
  std::cout << "s1의 객체 정보" << '\n';
  std::cout << "size : " <<s1.get_size()<< '\n';
  s1.print();
  int user_index;
  std::cout << "index 1 = " <<s1.get_item(1)<< '\n';
  while (1) {
    try{
      std::cout << "index : ";
      std::cin >> user_index;
      std::cout << "index "<<user_index<<" = " <<s1.get_item(user_index)<< '\n';
      break;
    }catch(std::exception &){
      std::cout << "Index is out of range. please try again." << '\n';
    }
  }


  std::cout << "pop : " <<s1.pop()<< '\n';
  s1.print();
  std::cout << "where is 4 ? : " <<s1.find_index(4)<< '\n';



  return 0;
}
