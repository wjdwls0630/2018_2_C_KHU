#ifndef FileNotFoundException_hpp
#define FileNotFoundException_hpp
class FileNotFoundException : public std::exception {
	std::string message; // Identifies the exception and filename
public:
	// Constructor establishes the exception object's message
	FileNotFoundException(const std::string& fname) :
		message("File \"" + fname + "\" not found") {}
	// Reveal message to clients
	// ORIGINAL CODE (BELOW) Causes error and we modified:
	// const char *what() const {
	virtual const char* what() const throw () {
		return message.c_str();
	}
};

#endif /* FileNotFoundException_hpp */
