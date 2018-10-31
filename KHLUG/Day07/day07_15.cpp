#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
  ifstream ifs;
  ofstream ofs, myfile;
  ifs.open("day07_12_2.txt");
  ofs.open("day07_15_1.txt");
  if (!ifs) {
    std::cout << "\aERROR 100: " <<"cannot opening file"<< '\n';
    exit(100);
  }
  char cInput;
  int countChar=0;

  while (ifs.get(cInput)) {
    if (countChar==50) {
      ofs.put('\n');
      ofs.put(cInput);
      std::cout  << '\n'<<cInput;
      countChar=0;

    } else {
      if (cInput!='\n') {
        countChar++;
        ofs.put(cInput);
        std::cout <<cInput;
      } else if(cInput=='\n'){
        countChar++;
        ofs.put(' ');
        std::cout  <<' ';
      }
    }



  }

  ifs.close();
  ofs.close();
  ifs.open("day07_12_2.txt");
  myfile.open("day07_15_2.txt");
  string line;
  getline(ifs,line);


  do {

    myfile.width(40);
    myfile<<line<<endl;

  } while(getline(ifs,line));
  myfile.close();

  return 0;
}
