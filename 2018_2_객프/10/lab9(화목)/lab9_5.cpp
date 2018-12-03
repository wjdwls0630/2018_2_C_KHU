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
  Stack & operator+=(const Stack &s);
  bool operator==(const Stack &s) const;
  friend class SpyStack;
  friend int get_num_common_items(const Stack& s1, const Stack& s2);
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
Stack & Stack::operator+=(const Stack &s){
  for (int i = 0; i < s.get_size(); i++) {
    push(s.get_item(i));
  }
  return *this;
}
bool Stack::operator==(const Stack &s) const {
  if (size==s.get_size()) {
    for (int i = 0; i < size; i++) {
      if (get_item(i)!=s.get_item(i)) {
        return false;
      }
    }
    return true;
  }
  return false;
}
//friend function (not member function not Stack::)
int get_num_common_items(const Stack& s1, const  Stack& s2) {
  int count=0;
  for (int i = 0; i < s1.size; i++) {
    for (int j = 0; j < s2.size; j++) {
      if (s1.p_list[i]==s2.p_list[j]) {
        count++;
      }
    }
  }
  return count;
}

//friend class
class SpyStack {

public:
  void print_all_info(const Stack& s);
};
void SpyStack::print_all_info(const Stack& s){
  std::cout << "MAX_SIZE : " <<s.MAX_SIZE<< '\n';
  std::cout << "size : " <<s.size<< '\n';
  s.print();
}

int main() {
  Stack s1(20);
  Stack *ps;
  SpyStack ssp;
  std::cout << "Number of created objects : " <<Stack::get_num_stacks()<< '\n';

  ps= new Stack;
  std::cout << "After ps = new Stack, Number of created objects : " <<Stack::get_num_stacks()<< '\n';

  std::cout << "There is no item in list and use pop()" << '\n';
  s1.pop();

  std::cout << "push the item to s1" << '\n';
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

  std::cout << "where is 4 in s1 ? : " <<s1.find_index(4)<< '\n';

  std::cout << "push the item to ps " << '\n';
  ps->push(7);
  ps->push(5);
  ps->push(9);
  ps->push(10);

  std::cout << "ps의 객체 정보" << '\n';
  std::cout << "size : " <<ps->get_size()<< '\n';
  ps->print();

  std::cout << "s의 객체 정보" << '\n';
  std::cout << "size : " <<s1.get_size()<< '\n';
  s1.print();

  s1+=*ps;
  std::cout << "After s1+=*ps, Number of created objects : " <<Stack::get_num_stacks()<< '\n';
  std::cout << "After s1+=*ps, s1의 객체 정보" << '\n';
  std::cout << "size : " <<s1.get_size()<< '\n';
  s1.print();

  std::cout << "s1==*ps ? : " ;
  if (s1==*ps) {
    std::cout << "true" << '\n';
  } else{
    std::cout << "false" << '\n';
  }

  std::cout << "Using friend class SpyStack " << '\n';

  std::cout << "s1의 객체 정보" << '\n';
  ssp.print_all_info(s1);

  std::cout << "ps의 객체 정보" << '\n';
  ssp.print_all_info(*ps);

  std::cout << "Number of Common items between s1 and *ps : " << get_num_common_items(s1, *ps)<<'\n';

  delete ps;
  std::cout << "After delete ps, Number of created objects : " <<Stack::get_num_stacks()<< '\n';


  return 0;
}
