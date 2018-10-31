#include <iostream>
using namespace std;

int gcd(int p, int q) {
	if (q == 0) return p;
	return gcd(q, p % q);
}

class Fraction {
private:
	int numerator;
	int denominator;

public:
	// Constructor, Destructor
	Fraction(int numer, int denom);
	~Fraction();

	// Methods...
	void store(int, int);
	void print();

	void normalize();

	// Getter
	int getNumerator();
	int getDenominator();

	// Setter
	void setNumerator(int);
	void setDenominator(int);
};

Fraction::Fraction(int numer = 0, int denom = 1) {
	if (denom == 0) {
		cerr << "0으로 나눌 수 없음" << endl;
		exit(100);
	}
	this->numerator = numer;
	this->denominator = denom;

	this->normalize();
}

Fraction::~Fraction() {
}


void Fraction::store(int numer, int denom) {
	if (denom == 0) {
		cerr << "0으로 나눌 수 없음" << endl;
		exit(100);
	}

	this->numerator = numer;
	this->denominator = denom;
	return;
}

void Fraction::print() {
	cout << this->numerator << "/" << this->denominator;
	return;
}

void Fraction::normalize() {
	bool isMinus = ((double)this->numerator / this->denominator < 0); // 분수의 값이 0보다 작으면 true, 크거나 같으면 false. -0.5는 0이 되기 때문에 실수로 계산해야 함
	
	int g = gcd(this->numerator, this->denominator);
	this->numerator /= g;
	this->denominator /= g;

	this->numerator = (isMinus ? -1 : 1 ) * abs(this->numerator); // 음수인 경우 분자의 절대값에 -1을, 아닌 경우 1을 곱함
	this->denominator = abs(this->denominator); // 분모에는 -가 붙지 않으므로 절대값으로 만듦
}

int Fraction::getNumerator() {
	return this->numerator;
}

int Fraction::getDenominator() {
	return this->denominator;
}

void Fraction::setNumerator(int numer) {
	this->numerator = numer;
}

void Fraction::setDenominator(int denom) {
	if (denom == 0) {
		cerr << "0으로 나눌 수 없음" << endl;
		exit(100);
	}
	this->denominator = denom;
}

// Fraction END


int main() {
	Fraction fr1(2, 3);
	cout << "fr1(2, 3): ";
	fr1.print();
	cout << endl;

	Fraction fr2(-2, 3);
	cout << "fr2(-2, 3): ";
	fr2.print();
	cout << endl;

	Fraction fr3(2, -3);
	cout << "fr3(2, -3): ";
	fr3.print();
	cout << endl;

	Fraction fr4(-2, -3);
	cout << "fr4(-2, -3): ";
	fr4.print();
	cout << endl;

	return 0;
}