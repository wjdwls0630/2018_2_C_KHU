#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


void intialize_die() ;
void show_die(int spots1, int spots2, ofstream &ofs);
int roll();


int main() {
  intialize_die();
  char user_input;
  ofstream ofs("lab6_2.txt");
  std::cout << "Do you want to roll a dice?(y/n) : ";
  std::cin >> user_input;
  while (user_input!='n') {
    show_die(roll(),roll(),ofs);
    std::cout << "Do you want to roll a dice?(y/n) : ";
    std::cin >> user_input;
  }
  ofs.close();
  ifstream ifs("lab6_2.txt");

  char cInput;

  std::cout << "\ncalling your data..." << '\n';
  while (ifs.get(cInput)) {
    std::cout << cInput;
  }

  return 0;
}

void intialize_die() {
  //set random seed value
  srand(static_cast<unsigned>(time(0)));
}

int roll(){
  return rand()%6+1;
}

void show_die(int spots1, int spots2,ofstream &ofs) {
  std::cout << "+-------+" << ' '<< "+-------+"<<'\n' ;
  ofs<< "+-------+" << ' '<< "+-------+"<<'\n' ;
  switch (spots1) {
    case 1:
    switch (spots2) {
      case 1:
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << ' ';
        std::cout << "double!" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << ' ';
        ofs << "double!" << '\n';
        break;
      case 2:
        std::cout << "|       |" << ' ';
        std::cout << "| *     |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|     * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| *     |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|     * |" << '\n';
        break;
      case 3:
        std::cout << "|       |" << ' ';
        std::cout << "|     * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "| *     |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|     * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| *     |" << '\n';
        break;
      case 4:
        std::cout << "|       |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 5:
        std::cout << "|       |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 6:
        std::cout << "|       |" << ' ';
        std::cout << "| * * * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "| * * * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| * * * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "| * * * |" << '\n';
        break;
      default :
        std::cout << "|       |" << ' ';
        std::cout << "*** Error: illegal die value ***" << '\n';
        std::cout << "|   *   |" << '\n';
        std::cout << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "*** Error: illegal die value ***" << '\n';
        ofs << "|   *   |" << '\n';
        ofs << "|       |" << '\n';
        break;
    }
    break;
    case 2:
    switch (spots2) {
      case 1:
        std::cout << "| *     |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "|     * |" << ' ';
        std::cout << "|       |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "|       |" << '\n';
        break;
      case 2:
        std::cout << "| *     |" << ' ';
        std::cout << "| *     |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|     * |" << ' ';
        std::cout << "|     * |" << ' ';
        std::cout << "double!" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| *     |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "|     * |" << ' ';
        ofs << "double!" << '\n';
        break;
      case 3:
        std::cout << "| *     |" << ' ';
        std::cout << "|     * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "|     * |" << ' ';
        std::cout << "| *     |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "|     * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| *     |" << '\n';
        break;
      case 4:
        std::cout << "| *     |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|     * |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 5:
        std::cout << "| *     |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "|     * |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 6:
        std::cout << "| *     |" << ' ';
        std::cout << "| * * * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|     * |" << ' ';
        std::cout << "| * * * |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| * * * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| * * * |" << '\n';
        break;
      default :
        std::cout << "|       |" << ' ';
        std::cout << "*** Error: illegal die value ***" << '\n';
        std::cout << "|   *   |" << '\n';
        std::cout << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "*** Error: illegal die value ***" << '\n';
        ofs << "|   *   |" << '\n';
        ofs << "|       |" << '\n';
        break;
    }
      break;
    case 3:
    switch (spots2) {
      case 1:
        std::cout << "|     * |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *     |" << ' ';
        std::cout << "|       |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "|       |" << '\n';
        break;
      case 2:
        std::cout << "|     * |" << ' ';
        std::cout << "| *     |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *     |" << ' ';
        std::cout << "|     * |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| *     |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "|     * |" << '\n';
        break;
      case 3:
        std::cout << "|     * |" << ' ';
        std::cout << "|     * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *     |" << ' ';
        std::cout << "| *     |" << ' ';
        std::cout << "double!" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "|     * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| *     |" << ' ';
        ofs << "double!" << '\n';
        break;
      case 4:
        std::cout << "|     * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *     |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 5:
        std::cout << "|     * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *     |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 6:
        std::cout << "|     * |" << ' ';
        std::cout << "| * * * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *     |" << ' ';
        std::cout << "| * * * |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "| * * * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *     |" << ' ';
        ofs << "| * * * |" << '\n';
        break;
      default :
        std::cout << "|     * |" << ' ';
        std::cout << "*** Error: illegal die value ***" << '\n';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *     |" << '\n';
        ofs << "|     * |" << ' ';
        ofs << "*** Error: illegal die value ***" << '\n';
        ofs << "|   *   |" << '\n';
        ofs << "| *     |" << '\n';
        break;
    }
      break;
    case 4:
    switch (spots2) {
      case 1:
        std::cout << "| *   * |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|       |" << '\n';
        break;
      case 2:
        std::cout << "| *   * |" << ' ';
        std::cout << "| *     |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "|     * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *     |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|     * |" << '\n';
        break;
      case 3:
        std::cout << "| *   * |" << ' ';
        std::cout << "|     * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| *     |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|     * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *     |" << '\n';
        break;
      case 4:
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << ' ';
        std::cout << "double!" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << ' ';
        ofs << "double!" << '\n';
        break;
      case 5:
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 6:
        std::cout << "| *   * |" << ' ';
        std::cout << "| * * * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| * * * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| * * * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| * * * |" << '\n';
        break;
      default :
        std::cout << "| *   * |" << ' ';
        std::cout << "*** Error: illegal die value ***" << '\n';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "*** Error: illegal die value ***" << '\n';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << '\n';
        break;
    }
      break;
    case 5:
    switch (spots2) {
      case 1:
        std::cout << "| *   * |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|       |" << '\n';
        break;
      case 2:
        std::cout << "| *   * |" << ' ';
        std::cout << "| *     |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "|     * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *     |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|     * |" << '\n';
        break;
      case 3:
        std::cout << "| *   * |" << ' ';
        std::cout << "|     * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| *     |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "|     * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *     |" << '\n';
        break;
      case 4:
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 5:
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| *   * |" << ' ';
        std::cout << "double!" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| *   * |" << ' ';
        ofs << "double!" << '\n';
        break;
      case 6:
        std::cout << "| *   * |" << ' ';
        std::cout << "| * * * |" << '\n';
        std::cout << "|   *   |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| *   * |" << ' ';
        std::cout << "| * * * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| * * * |" << '\n';
        ofs << "|   *   |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "| * * * |" << '\n';
        break;
      default :
        std::cout << "| *   * |" << ' ';
        std::cout << "*** Error: illegal die value ***" << '\n';
        std::cout << "|   *   |" << '\n';
        std::cout << "| *   * |" << '\n';
        ofs << "| *   * |" << ' ';
        ofs << "*** Error: illegal die value ***" << '\n';
        ofs << "|   *   |" << '\n';
        ofs << "| *   * |" << '\n';
        break;
    }
      break;
    case 6:
    switch (spots2) {
      case 1:
        std::cout << "| * * * |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| * * * |" << ' ';
        std::cout << "|       |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "|       |" << '\n';
        break;
      case 2:
        std::cout << "| * * * |" << ' ';
        std::cout << "| *     |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| * * * |" << ' ';
        std::cout << "|     * |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| *     |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "|     * |" << '\n';
        break;
      case 3:
        std::cout << "| * * * |" << ' ';
        std::cout << "|     * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| * * * |" << ' ';
        std::cout << "| *     |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "|     * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| *     |" << '\n';
        break;
      case 4:
        std::cout << "| * * * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| * * * |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 5:
        std::cout << "| * * * |" << ' ';
        std::cout << "| *   * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|   *   |" << '\n';
        std::cout << "| * * * |" << ' ';
        std::cout << "| *   * |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| *   * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|   *   |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| *   * |" << '\n';
        break;
      case 6:
        std::cout << "| * * * |" << ' ';
        std::cout << "| * * * |" << '\n';
        std::cout << "|       |" << ' ';
        std::cout << "|       |" << '\n';
        std::cout << "| * * * |" << ' ';
        std::cout << "| * * * |" << ' ';
        std::cout << "double!" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| * * * |" << '\n';
        ofs << "|       |" << ' ';
        ofs << "|       |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "| * * * |" << ' ';
        ofs << "double!" << '\n';
        break;
      default :
        std::cout << "| * * * |" << ' ';
        std::cout << "*** Error: illegal die value ***" << '\n';
        std::cout << "|       |" << '\n';
        std::cout << "| * * * |" << '\n';
        ofs << "| * * * |" << ' ';
        ofs << "*** Error: illegal die value ***" << '\n';
        ofs << "|       |" << '\n';
        ofs << "| * * * |" << '\n';
        break;
    }
      break;
    default :
      std::cout << "*** Error: illegal die value ***" << '\n';
      ofs << "*** Error: illegal die value ***" << '\n';
      break;
  }
  std::cout << "+-------+" <<' '<< "+-------+"<<'\n' ;
  ofs << "+-------+" <<' '<< "+-------+"<<'\n' ;

}
