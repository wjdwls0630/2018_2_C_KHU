#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Item {
private:
  std::vector<std::string> item;
  std::vector<char> Grade;
  std::vector<float> Base_price;

public:
  Item();
  //Item (const std::string &item, const char & grade, const float& basePrice);
  void push_item(const std::string &item, const char & grade, const float& basePrice);
  int search_item(const std::string &itemName);
  char getItemGrade(const int &index);
  float getItemBaseP(const int &index);
};
Item::Item(){
  this->item.clear();
  this->Grade.clear();
  this->Base_price.clear();
}
void Item::push_item(const std::string &item, const char & grade, const float& basePrice){
  this->item.push_back(item);
  this->Grade.push_back(grade);
  this->Base_price.push_back(basePrice);
}
int Item::search_item(const std::string &itemName){
  int index;
  for (int i = 0; i < this->item.size(); i++) {
    if (item[i]==itemName) {
      index=i;
      break;
    }
  }
  return index;
}
char Item::getItemGrade(const int &index){ return this->Grade.at(index);}
float Item::getItemBaseP(const int &index){ return this->Base_price.at(index); }

class Mart : public Item {
private:
  std::string Name;
  int ID;
  std::string location;
public:
  Mart (const std::string &name, const int &id, const std::string &loc);
  void addgrade(const std::string &item, const char & grade, const float& basePrice);
  void printInfo();
  float GetPrice(const std::string &itemName)  ;
};

Mart::Mart (const std::string &name, const int &id, const std::string &loc):
Name(name),ID(id),location(loc),Item(){}
void Mart::addgrade(const std::string &item, const char & grade, const float& basePrice){
  this->push_item(item, grade, basePrice);
}
void Mart::printInfo(){
  //Because of macOS I write for English
  std::cout << "Mart Name : " <<this->Name <<'\n';
  std::cout << "ID : " <<this->ID <<'\n';
  std::cout << "Location : " <<this->location <<'\n';
}
float Mart::GetPrice(const std::string &itemName) {
  int itemIndex;
  itemIndex=this->search_item(itemName);
  char itemGrade =this->getItemGrade(itemIndex);
  float itemBaseP= this->getItemBaseP(itemIndex);
  float price=0;
  if (itemGrade=='A') {
    price=itemBaseP*1.6;
  } else if (itemGrade=='B') {
    price=itemBaseP*1.4;
  } else if (itemGrade=='C') {
    price=itemBaseP*1.2;
  } else if (itemGrade=='D') {
    price=itemBaseP*1.0;
  } else {
    price=itemBaseP*0.8;
  }
  return price;
}
void sortMart(std::vector<Mart> &mart,const std::string & itemName );

int main()
{

    Mart A("LotteMart", 20181214, "suwon");
    Mart B("EMart", 20181215, "yongin");
    Mart C("HomePlus", 20181216, "sungnam");

    A.addgrade("apple", 'A', 1000);
    A.addgrade("banana", 'D', 500);
    A.addgrade("grape", 'B', 2000);
    A.addgrade("kiwi", 'F', 3000);

    B.addgrade("apple", 'C', 1000);
    B.addgrade("banana", 'B', 500);
    B.addgrade("grape", 'D', 2000);
    B.addgrade("kiwi", 'A', 3000);

    C.addgrade("apple", 'F', 1000);
    C.addgrade("banana", 'C', 500);
    C.addgrade("grape", 'A', 2000);
    C.addgrade("kiwi", 'C', 3000);

    vector<Mart> mart;
    mart.push_back(A);
    mart.push_back(B);
    mart.push_back(C);
    std::string itemName;
    std::cout << "Enter the itemName : ";
    std::cin >> itemName;
    sortMart(mart,itemName);
    for (int i = 0; i < mart.size(); i++) {
      std::cout << "Rank " <<i+1 <<'\n';
      mart[i].printInfo();
      std::cout << "Item Price : "<<mart[i].GetPrice(itemName)<< '\n';
    }


    return 0;
}
void sortMart(std::vector<Mart> &mart, const std::string & itemName ) {
  int target_index;
  for (int i = 0; i < mart.size()-1; i++) {
    target_index=i;
    for (int j = i+1; j < mart.size(); j++) {
      if (mart[target_index].GetPrice(itemName)<mart[j].GetPrice(itemName)) {
        target_index=j;
      }
    }
    std::swap(mart[i], mart[target_index]);
  }
}
