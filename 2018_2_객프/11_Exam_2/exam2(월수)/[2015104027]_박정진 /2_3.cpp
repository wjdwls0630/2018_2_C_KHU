#include <iostream>
class Calculator {
private:
  int *a;
  int size;
public:
  Calculator (int size):size(size){
    a= new int[size];
    std::cout << "배열 원소 설정" << '\n';
    for (int i = 0; i < size; i++) {
      std::cout << i <<" 번째 데이터 : ";
      std::cin >> a[i];
    }
  }
  Calculator (int size, int *a):size(size){
    this->a= new int[size];
    for (int i = 0; i < size; i++) {
      this->a[i]=a[i];
    }
  }
  Calculator (){}
  int getSize() const {
    return size;
  }
  const Calculator operator+(const Calculator &a2) const{

    int count=this->size/a2.size;
    int list[this->size];
    for (int i = 0; i < count; i++) {
      for (int j = 0; j < a2.size; j++) {
        list[j+a2.size*i]=a2.a[j];
      }
    }

    for (int i = 0; i < this->size; i++) {
      list[i]=this->a[i]+list[i];
    }
    return Calculator(this->size,list);
  }
  Calculator & operator =(const Calculator &a2){
    this->size=a2.size;
    this->a=new int[a2.size];
    for (int i = 0; i < a2.size; i++) {
      this->a[i]=a2.a[i];
    }
    return *this;
  }
  const Calculator operator-(const Calculator &a2) const{
    int count=this->size/a2.size;
    int list[this->size];
    for (int i = 0; i < count; i++) {
      for (int j = 0; j < a2.size; j++) {
        list[j+a2.size*i]=a2.a[j];
      }
    }

    for (int i = 0; i < this->size; i++) {
      list[i]=this->a[i]-list[i];
    }
    return Calculator(this->size,list);
  }
  const Calculator operator*(const Calculator &a2) const{
    int count=this->size/a2.size;
    int list[this->size];
    for (int i = 0; i < count; i++) {
      for (int j = 0; j < a2.size; j++) {
        list[j+a2.size*i]=a2.a[j];
      }
    }

    for (int i = 0; i < this->size; i++) {
      list[i]=this->a[i]*list[i];
    }
    return Calculator(this->size,list);
  }
  const Calculator operator/(const Calculator &a2) const{
    int count=this->size/a2.size;
    int list[this->size];
    for (int i = 0; i < count; i++) {
      for (int j = 0; j < a2.size; j++) {
        list[j+a2.size*i]=a2.a[j];
      }
    }

    for (int i = 0; i < this->size; i++) {
      list[i]=this->a[i]/list[i];
    }
    return Calculator(this->size,list);
  }
  void display() {
    std::cout << "---결과---" << '\n';
    std::cout << "size : " <<this->size<< '\n';
    std::cout << "data : [ ";
    for (int i = 0; i < this->size; i++) {
      std::cout << this->a[i] <<", ";
    }
    std::cout << "]" << '\n';
  }

};
int main() {
  int size;
  std::cout << "첫번째 배열의 크기를 입력하세요 : ";
  std::cin >> size;
  Calculator a1(size);
  std::cout << "두번째 배열의 크기를 입력하세요 : ";
  std::cin >> size;
  Calculator a2(size);
  char oper;
  std::cout << "수행하고자 하는 연산을 선택하세요 : ";
  std::cin >> oper;
  if(a1.getSize()%a2.getSize()!=0||a1.getSize()<a2.getSize()){
    std::cout << "[Abort] size dismatch" << '\n';
  }else{
    Calculator a3;
    if (oper=='+') {
      a3=a1+a2;
    } else if (oper=='-') {
      a3=a1-a2;
    } else if (oper=='*') {
      a3=a1*a2;
    } else if (oper=='/') {
      a3=a1/a2;
    }
    a3.display();
  }



  return 0;
}
