#ifndef Error2_hpp
#define Error2_hpp

class OutOfDegree : public std::exception {
private:
  std::string message;
public:
  OutOfDegree ():message("Error: out of Degree"){}
  virtual const char * what() const throw(){ return message.c_str();}
};
#endif /* Error2_hpp */
