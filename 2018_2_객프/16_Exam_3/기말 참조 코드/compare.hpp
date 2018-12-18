#ifndef a13_6_hpp
#define a13_6_hpp

//class Comparer declaration
template<typename T>
class Comparer {
private:
  int compare_count;
  int swap_count;
  bool (*comp)(const T &, const T &);
protected:
  virtual bool compare_impl(const T &a, const T &b);
  virtual void swap_impl(T & a, T &b);
public:
  Comparer (bool (*f)(const T &, const T &));
  void reset();
  bool compare(const T & a, const T &b) ;
  void swap(T & a, T &b);
  int comparisons() const;
  int swaps() const;
};

//class Comparer definition

template<typename T> bool Comparer<T>::compare_impl(const T &a, const T &b){ return this->comp(a,b); }
template<typename T> void Comparer<T>::swap_impl(T & a, T &b){
  T temp = a;
  a=b;
  b=temp;
}

template<typename T>Comparer<T>::Comparer (bool (*f)(const T &, const T &))
:compare_count(0),swap_count(0),comp(f){}

template<typename T> void Comparer<T>::reset() { compare_count=swap_count=0; }
template<typename T> bool Comparer<T>::compare(const T & a, const T &b) {
  this->compare_count++;
  return this->compare_impl(a,b);
}
template<typename T> void Comparer<T>::swap(T & a, T &b) {
  this->swap_count++;
  this->swap_impl(a,b);
}
template<typename T> int Comparer<T>::comparisons() const { return this->compare_count; }
template<typename T> int Comparer<T>::swaps() const { return this->swap_count; }


template<typename T> void SelectionSort(std::vector<T> &a, Comparer<T> &compare);
template<typename T> bool less_than(const T &a, const T &b);
template<typename T> bool great_than(const T &a, const T &b);
template<typename T> std::ostream & operator<<(std::ostream &os, const std::vector<T> &a);
template<typename T> void make_list(std::vector<T> &a);

template<typename T> void SelectionSort(std::vector<T> &a, Comparer<T> &compare) {
  int select_index;
  for (int i = 0; i <a.size()-1; i++) {
    select_index=i;
    for (int j = i+1; j < a.size(); j++) {
      if (compare.compare(a[j],a[select_index])) {
        select_index=j;
      }
    }
    compare.swap(a[i],a[select_index]);
  }
}
template<typename T> bool less_than(const T &a, const T &b) { return a<b; }
template<typename T> bool great_than(const T &a, const T &b) { return a>b; }
template<typename T> std::ostream & operator<<(std::ostream &os, const std::vector<T> &a){
  os<<'{';
  int size=a.size();
  if(size>0){
    os<<a[0];
    for (int i = 1; i < size; i++) {
      os<<", "<<a[i];
    }
  }
  os<<'}';
  return os;
}

#endif /* a13_6_hpp */
