#ifndef CStudent_hpp
#define CStudent_hpp

using namespace std;
class CStudent{
public:
  CStudent() {}
  ~CStudent() {}
  void setName(string n) { m_Name = n; }
  string getName() { return m_Name; }
  void setNumber(int n) { m_Number = n; }
  int getNumber() { return m_Number; }
  void setMajor(string n) { m_Major = n; }
  string getMajor() { return m_Major; }
  void setAll(string name, int number, string major){

    m_Name = name;
    m_Number = number;
    m_Major = major;
  }
  void Display(){
    cout << "이름 : " << m_Name << "\n"; cout << "학번 : " << m_Number << "\n"; cout << "전공 : " << m_Major << "\n\n";
  }
private:
  string m_Name;
  int m_Number;
  string m_Major;
};

#endif /* CStudent_hpp */
