#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream myfile1;
  string iLine = "Writing this to a file";
  myfile1.open("7_5.txt");
  myfile1<<iLine<<'\n';

  //If you want, add more file output at here like

  while (iLine!="quit") {
    cout << endl << "Please enter an word (type \"quit\" to stop): ";
    cin >> iLine;
    myfile1 << iLine << endl;
  }

  myfile1.close();

  ifstream myfile2("7_5.txt");
  string oLine;
  if (myfile2.is_open()) {
    while (getline(myfile2,oLine)) {
      std::cout << "\n" << oLine;
    }
  } else {
    std::cout << "Unable to open 7_5.txt" << '\n';
  }
  myfile2.close();
  return 0;
}
