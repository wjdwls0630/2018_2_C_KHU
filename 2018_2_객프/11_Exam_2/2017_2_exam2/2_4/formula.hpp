#ifndef formula_hpp
#define formula_hpp
class formula {
private:
  formula * left;
  formula * right;
  int value;
  char oper;


public:
  formula (arguments);
  virtual ~formula ();
};
#endif /* formula_hpp */
