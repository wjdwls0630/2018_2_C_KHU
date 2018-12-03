#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Text {
private:
  std::string text;
public:
  Text (const std::string & t):text(t){}
  virtual std::string get() const { return text; }
  virtual void append(const std::string & extra){ text+=extra; }
};
class FancyText : public Text {
private:
  std::string left_bracket;
  std::string right_bracket;
  std::string connector;

public:
  FancyText (const std::string & t,const std::string & left,const std::string & right,const std::string & conn)
  :Text(t),left_bracket(left),right_bracket(right),connector(conn){}
  std::string get() const override { return left_bracket+Text::get()+right_bracket; }
  void append (const std::string & extra) override { Text::append(connector+extra); }
};
class FixedText : public Text {
public:
  FixedText () : Text("Fixed"){}
  void append (const std::string & extra) override { }
};
typedef Text T;
typedef FancyText FaT;
typedef FixedText FiT;
int main() {
  std::vector<Text*> texts{new T("Wow"),new FaT("Wee","[","]","-"),new FiT,new FaT("Whoa",":",":",":")};
  for (auto t : texts) {
    std::cout << t->get() << '\n';
  }
  for_each(texts.begin(),texts.end(),[](Text* x)->void { std::cout << x->get() << '\n'; });




  return 0;
}
