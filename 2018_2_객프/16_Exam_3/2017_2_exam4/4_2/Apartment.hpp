#ifndef Apartment_hpp
#define Apartment_hpp
#include "Building.hpp"
class Apartment : public Building {
private:
  int m_household_number;


public:
  Apartment (arguments);
  void setBuildingtype() override;
};
#endif /* Apartment_hpp */
