#ifndef shape_hpp
#define shape_hpp

class Shape {
public:
  virtual double span () const =0;
  virtual double area () const =0;

};
#endif /*shape_hpp*/
