#ifndef Error_hpp
#define Error_hpp
class InvalidOperation : public std::exception {
private:
  std::string message;
public:
  InvalidOperation ():message("잘못된 메뉴 번호입니다"){}
  virtual const char * what() const throw(){ return message.c_str(); }
};
#endif /* Error_hpp */
