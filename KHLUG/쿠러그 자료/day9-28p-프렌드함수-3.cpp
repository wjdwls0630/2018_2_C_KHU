#include <iostream>
#include <iomanip>
using namespace std;

class Laptop {
private:
	char osName[20];
	double displayWidth;
	long memorySize;

public:
	// Constructor, Destructor
	Laptop();
	Laptop(char[], double, long);
	~Laptop();

	// Methods...
	void print();

	// Getter
	char* getOsName();
	double getDisplayWidth();
	int getMemorySize();

	// Setter
	void setOsName(char[]);
	void setDisplayWidth(double);
	void setMemorySize(long);
};

Laptop::Laptop() {
	char input_osName[20];
	double input_displayWidth;
	long input_memorySize;

	cout << "OS Name (max 20 chars): ";
	cin >> input_osName;

	cout << "Display Width (inch) : ";
	cin >> input_displayWidth;

	cout << "Memory Size (MB)     : ";
	cin >> input_memorySize;

	strcpy_s(this->osName,input_osName); // char[]는 이렇게 넣어주어야 한다.
	this->displayWidth = input_displayWidth;
	this->memorySize = input_memorySize;

	clog << "> DEVICE CREATED" << endl << endl;
}

Laptop::Laptop(char input_osName[], double input_displayWidth, long input_memorySize) {
	strcpy_s(this->osName, input_osName);
	this->displayWidth = input_displayWidth;
	this->memorySize = input_memorySize;

	clog << "> DEVICE CREATED" << endl;
}

Laptop::~Laptop() {
	clog << "> DEVICE DESTRUCTED" << endl;
}

void Laptop::print() {
	cout << "> DEVICE #" << this << " SPECIFICATION" << endl;

	cout << "OS             : " << this->osName << endl;
	cout << "Display Width  : " << setw(10) << this->displayWidth << " inch" << endl;
	cout << "Memory Size    : " << setw(10) << this->memorySize << " MB" << endl;
	cout << endl;
}

char* Laptop::getOsName() {
	return this->osName;
}

double Laptop::getDisplayWidth() {
	return this->displayWidth;
}

int Laptop::getMemorySize() {
	return this->memorySize;

}

void Laptop::setOsName(char input_osName[]) {
	strcpy_s(this->osName, input_osName);
}

void Laptop::setDisplayWidth(double input_displayWidth) {
	this->displayWidth = input_displayWidth;
}

void Laptop::setMemorySize(long input_memorySize) {
	this->memorySize = input_memorySize;
}

// Laptop END

int main() {
	Laptop laptop00("macOS_Sierra", 15.6, 16384);
	laptop00.print();

	Laptop laptop01;
	laptop01.print();

	return 0;
}