#ifndef Student_hpp
#define Student_hpp
#include <vector>

class Student {
private:
  int ID;
  std::vector<Score*> Score_List;
  bool operator ==(const int &inID) const;
public:
  Student (arguments);
  virtual ~Student ();
};
bool Student::operator ==(const std::string &inID) const{ return this->ID==inID; }

#endif /* Student_hpp */
