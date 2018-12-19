#include <iostream>

class Errors
{
public:
	virtual void printMessage()
	{
		std::cout << "**Error : type Error\n";
	}
};

class DivbyZero : public Errors
{
public:
	void printMessage() override
	{
		std::cout << "**Error : 100 type DivbyZero\n";
	}
};
class DivbyNeg : public Errors
{
public:
	void printMessage() override
	{
		std::cout << "**Error : 101 type DivbyNeg\n";
	}
};
class BadOperator : public Errors
{
public:
	void printMessage() override
	{
		std::cout << "**Error : 102 invalid operator\n";
	}
};
double operation(double a, double b, char oper);

int main() {
  double result;
  std::cout << "Enter the first data: ";
  double data1;
  std::cin >> data1;
  std::cout << "Enter the second data : ";
  double data2;
  std::cin >> data2;
  std::cout << "Enter the operator : " ;
  char oper;
  std::cin >> oper;
  try {
    result=operation(data1, data2,oper);
  } catch(Errors &ex){
    ex.printMessage();
  }
  return 0;
}
double operation(double a, double b, char oper){
  double result;
  switch (oper) {
    case '+':
    result=a+b;
    break;
    case '-':
    result=a-b;
    break;
    case '*':
    result=a*b;
    break;
    case '/':
    if(b==0){
      throw DivbyZero();
    } else if(b<0){
      throw DivbyNeg();
    } else{
      result=a/b;
    }
    break;
    default :
    throw BadOperator();
  }

  return result;
}
