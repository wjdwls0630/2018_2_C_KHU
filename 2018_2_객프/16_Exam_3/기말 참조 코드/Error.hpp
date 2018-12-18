class FileNotFoundException : public std::exception {
private:
  std::string message;
public:
  FileNotFoundException (const std::string &fname):message("File \""+fname+"\" not found!"){}
  virtual const char * what() const throw(){return message.c_str();}
};

class ListIsFull : public std::exception {
private:
  std::string message;
public:
  ListIsFull ():message("Error: out of memory"){}
  virtual const char * what() const throw(){ return message.c_str();}
};

class ListIsEmpty : public std::exception{
private:
  std::string message;
public:
  ListIsEmpty ():message("Error : No items exists in the list"){}
  virtual const char* what() const throw(){ return message.c_str();}
};
