#ifndef Error1_hpp
#define Error1_hpp

class ListIsFull : public std::exception {
private:
  std::string message;
public:
  ListIsFull ():message("Error: out of memory, Resize DataList by Two times..."){}
  virtual const char * what() const throw(){ return message.c_str();}
};
#endif /* Error1_hpp */
