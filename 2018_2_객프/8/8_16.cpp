#include <iostream>
#include <iomanip>




bool find_char(const char *s, char ch );



int main() {
  const char *s ="this is the phrase";
  for (char ch = 'a'; ch <= 'z'; ch++) {
    std::cout << "\'" <<ch<<"\' is ";
    if (!find_char(s,ch)) {
      std::cout << "NOT " ;
    }
    std::cout << "in \"" <<s<<"\'\n";

  }




  return 0;
}
bool find_char(const char *s, char ch ) {
  while (*s!='\0') {
    if (*s==ch) {
      return true;
    }
    s++;
  }
  return false;
}
