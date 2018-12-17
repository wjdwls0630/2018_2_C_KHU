#ifndef Building_hpp
#define Building_hpp

class Building {
private:
  int m_build_number;
  std::string m_build_type;
  std::string m_build_address;

public:
  Building ():m_build_number(0),m_build_type("NULL TYPE"),m_build_address("NULL ADDR"){}
  virtual void setBuildingNumber(const int &number);
  virtual void setBuildingAddress(const std::string &address);
  virtual void setBuildingtype(const std::string &type);
  virtual void setBuildingData()

};
void Building::setBuildingNumber(const int &number){ this->m_build_number=number;}
void Building::setBuildingAddress(const std::string &address){ this->m_build_address=address;}
void Building::setBuildingtype(const std::string &type){ this->m_build_type=type;}
#endif /* Building_hpp */
