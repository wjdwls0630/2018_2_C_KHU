#ifndef lab13_3_hpp
#define lab13_3_hpp

template <typename T>
using Matrix= std::vector<std::vector<T>>;

template <typename T>
class MagicSquare {
private:
  Matrix<T> table;
  T *sum_row;
  T *sum_col;
  T sum_right_diagonal;
  T sum_left_diagonal;
public:
  MagicSquare (Matrix<T> &v);
  virtual ~MagicSquare ();
  void makeMS(Matrix<T> &v );
  void print_table();
  void calc_sum_left_diagonal();
  void calc_sum_right_diagonal();
  void calc_sum_row();
  void calc_sum_col();
  void print_sum();
};


template<typename T>MagicSquare<T>::MagicSquare (Matrix<T> &v)
:sum_right_diagonal(0),sum_left_diagonal(0){
  this->makeMS(v);
  this->table=v;
  this->sum_row=new T[this->table.size()];
  this->sum_col=new T[this->table.size()];
  this->calc_sum_row();
  this->calc_sum_col();
  this->calc_sum_right_diagonal();
  this->calc_sum_left_diagonal();
}

template<typename T>MagicSquare<T>::~MagicSquare (){
  delete [] this->sum_row;
  delete [] this->sum_col;
}
template<typename T>void MagicSquare<T>::makeMS(Matrix<T> &v ) {
  int col_index=v.size()/2;
  int row_index=0;
  int temp_row,temp_col;
  for (int i = 1; i <= v.size()*v.size(); i++) {
    temp_row=row_index;
    temp_col=col_index;
    v[row_index][col_index]=i;
    row_index--;
    col_index++;
    if (row_index==-1) {
      row_index=v.size()-1;
    }
    if (col_index==v.size()) {
      col_index=0;
    }
    if (v[row_index][col_index]!=0) {
      row_index=temp_row+1;
      col_index=temp_col;
    }
  }
}
template<typename T>void MagicSquare<T>::print_table() {
  std::cout << '\n';
  for (int i = 0; i < this->table.size(); i++) {
    for (int j = 0; j < this->table[i].size(); j++) {
      std::cout <<std::setw(3) <<table[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
template<typename T>void MagicSquare<T>::calc_sum_left_diagonal() {
  for (int i = this->table.size()-1; i >=0; i--) {
    this->sum_left_diagonal+=this->table[this->table.size()-i-1][i];
  }
}
template<typename T>void MagicSquare<T>::calc_sum_right_diagonal() {
  for (int i = 0; i < this->table.size(); i++) {
    this->sum_right_diagonal+=this->table[i][i];
  }
}
template<typename T>void MagicSquare<T>::calc_sum_row() {
  int sum;
  for (int i = 0; i < this->table.size(); i++) {
    sum=0;
    for (int j = 0; j < this->table.size(); j++) {
      sum+=this->table[i][j];
    }
    this->sum_row[i]=sum;
  }
}
template<typename T>void MagicSquare<T>::calc_sum_col() {
  int sum;
  for (int j = 0; j < this->table.size(); j++) {
    sum=0;
    for (int i = 0; i < this->table.size(); i++) {
      sum+=table[i][j];
    }
    this->sum_col[j]=sum;
  }
}
template<typename T>void MagicSquare<T>::print_sum() {
  std::cout << '\n';
  std::cout << "행의 합 : " ;
  for (int i = 0; i < this->table.size(); i++) {
    std::cout << this->sum_row[i] << ' ';
  }
  std::cout << '\n';

  std::cout << '\n';
  std::cout << "열의 합 : ";
  for (int i = 0; i < this->table.size(); i++) {
    std::cout << this->sum_col[i] << ' ';
  }
  std::cout << '\n';

  std::cout << '\n';
  std::cout << "오른쪽 대각선의 합 : ";
  std::cout << this->sum_right_diagonal << '\n';

  std::cout << '\n';
  std::cout << "왼쪽 대각선의 합 : ";
  std::cout << this->sum_left_diagonal << '\n';
}

#endif /* lab13_3_hpp */
