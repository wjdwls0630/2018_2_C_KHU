#ifndef OutOfRange_hpp
#define OutOfRange_hpp
class OutOfRange : public std::exception {
	std::string message; // Identifies the exception and filename
public:
	// Constructor establishes the exception object's message
	OutOfRange(const std::string &typeName) :
  message("\ninvalid " + typeName + "<T> subscript") {}
	// Reveal message to clients
	// ORIGINAL CODE (BELOW) Causes error and we modified:
	// const char *what() const {
	virtual const char* what() const throw () {
		return message.c_str();
	}
};
#endif /* OutOfRange_hpp */
