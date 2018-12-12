#ifndef func_hpp
#define func_hpp
#include "fraction.hpp"
template<typename T>
T max(const T &a, const T &b){
  if (a>=b) {
    return a;
  } else{
    return b;
  }
}
template<>
fraction max(const fraction &a, const fraction &b){
  double p_a=a.getNumerator()/a.getDenominator();
  double p_b=b.getNumerator()/b.getDenominator();
  if (p_a>=p_b) {
    return a;
  } else{
    return b;
  }
}
template<typename T>
T summation(const T& a, const T &b){ return a+b ; }
template<>
fraction summation(const fraction& a, const fraction &b){
  return fraction(a.getNumerator()*b.getDenominator()+b.getNumerator()*a.getDenominator(),a.getDenominator()*b.getDenominator());
}

template<typename T>
T multiply(const T& a, const T &b){ return a*b ; }
template<>
fraction multiply(const fraction& a, const fraction &b){
  return fraction(a.getNumerator()*b.getNumerator(),a.getDenominator()*b.getDenominator());
}

#endif /* func_hpp */
