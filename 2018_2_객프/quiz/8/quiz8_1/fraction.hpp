#ifndef fraction_hpp
#define fraction_hpp
class fraction {
private:
  int numerator;
  int denominator;

public:
  fraction();
  fraction (const int &numer, const int &denom);
  int getNumerator() const;
  int getDenominator() const;
  virtual ~fraction (){}
  const fraction operator+(const fraction &fr) const;
  const fraction operator*(const fraction &fr) const;
  fraction & operator =(const fraction &fr);
  friend std::ostream & operator <<(std::ostream &os, const fraction &fr);
};
fraction::fraction():numerator(0),denominator(1){}
fraction::fraction(const int &numer, const int &denom):numerator(numer),denominator(denom){}
int fraction::getNumerator() const{ return this->numerator;}
int fraction::getDenominator() const{ return this->denominator;}
const fraction fraction::operator+(const fraction &fr) const{
  return fraction(this->numerator*fr.denominator+fr.numerator*this->denominator,this->denominator*fr.denominator);
}
const fraction fraction::operator*(const fraction &fr) const{
  return fraction(this->numerator*fr.numerator,this->denominator*fr.denominator);
}
fraction & fraction::operator =(const fraction &fr){
  this->numerator=fr.numerator;
  this->denominator=fr.denominator;
  return *this;
}
std::ostream & operator <<(std::ostream &os, const fraction &fr){
  return os<<fr.numerator<<"/"<<fr.denominator;
}


#endif /* fraction_hpp */
