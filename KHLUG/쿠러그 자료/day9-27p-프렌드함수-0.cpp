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
		cerr << "0���� ���� �� ����" << endl;
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
		cerr << "0���� ���� �� ����" << endl;
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
	bool isMinus = ((double)this->numerator / this->denominator < 0); // �м��� ���� 0���� ������ true, ũ�ų� ������ false. -0.5�� 0�� �Ǳ� ������ �Ǽ��� ����ؾ� ��
	
	int g = gcd(this->numerator, this->denominator);
	this->numerator /= g;
	this->denominator /= g;

	this->numerator = (isMinus ? -1 : 1 ) * abs(this->numerator); // ������ ��� ������ ���밪�� -1��, �ƴ� ��� 1�� ����
	this->denominator = abs(this->denominator); // �и𿡴� -�� ���� �����Ƿ� ���밪���� ����
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
		cerr << "0���� ���� �� ����" << endl;
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