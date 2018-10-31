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

	void addTo(const Fraction& fr2);
	void subtractTo(const Fraction& fr2);
	void multiplyBy(const Fraction& fr2);
	void divideBy(const Fraction& fr2);

	friend Fraction add(const Fraction& fr1, const Fraction& fr2);
	friend Fraction subtract(const Fraction& fr1, const Fraction& fr2);
	friend Fraction multiply(const Fraction& fr1, const Fraction& fr2);
	friend Fraction divide(const Fraction& fr1, const Fraction& fr2);

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

void Fraction::addTo(const Fraction& fr2)
{
	int numer = (this->numerator * fr2.denominator) + (fr2.numerator * this->denominator);
	int denom = this->denominator * fr2.denominator;
	this->numerator = numer;
	this->denominator = denom;
	return;
}

void Fraction::subtractTo(const Fraction& fr2)
{
	int numer = (this->numerator * fr2.denominator) - (fr2.numerator * this->denominator);
	int denom = this->denominator * fr2.denominator;
	this->numerator = numer;
	this->denominator = denom;
	return;
}

void Fraction::multiplyBy(const Fraction& fr2)
{
	int numer = this->numerator * fr2.numerator;
	int denom = this->denominator * fr2.denominator;
	numerator = numer;
	denominator = denom;
	return;
}

void Fraction::divideBy(const Fraction& fr2)
{
	int numer = this->numerator * fr2.denominator;
	int denom = this->denominator * fr2.numerator;
	numerator = numer;
	denominator = denom;
	return;
}

// Fraction END

Fraction add(const Fraction& fr1, const Fraction& fr2) {
	int numer = (fr1.numerator * fr2.denominator) + (fr2.numerator * fr1.denominator);
	int denom = fr1.denominator * fr2.denominator;
	return Fraction(numer, denom);
}

Fraction subtract(const Fraction& fr1, const Fraction& fr2) {
	int numer = (fr1.numerator * fr2.denominator) - (fr2.numerator * fr1.denominator);
	int denom = fr1.denominator * fr2.denominator;
	return Fraction(numer, denom);
}

Fraction multiply(const Fraction& fr1, const Fraction& fr2) {
	int numer = fr1.numerator * fr2.numerator;
	int denom = fr1.denominator * fr2.denominator;
	return Fraction(numer, denom);
}

Fraction divide(const Fraction& fr1, const Fraction& fr2) {
	int numer = fr1.numerator * fr2.denominator;
	int denom = fr1.denominator * fr2.numerator;
	return Fraction(numer, denom);
}


int main() {
	Fraction fr1(4, 5);
	cout << "Fraction 1: ";
	fr1.print();
	cout << endl;

	Fraction fr2(4, 6);
	cout << "Fraction 2: ";
	fr2.print();
	cout << endl;

	Fraction fAdd = add(fr1, fr2);
	cout << "Add       : ";
	fAdd.print();
	cout << endl;

	Fraction fSubtract = subtract(fr1, fr2);
	cout << "Subtract  : ";
	fSubtract.print();
	cout << endl;

	Fraction fMultiply = multiply(fr1, fr2);
	cout << "Multiply  : ";
	fMultiply.print();
	cout << endl;

	Fraction fDivide = divide(fr1, fr2);
	cout << "Divide    : ";
	fDivide.print();
	cout << endl;

	return 0;
}