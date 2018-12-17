#ifndef Dice_hpp
#define Dice_hpp
#include <cstdlib>
#include <ctime>
void initiallize_die(){
  srand((unsigned)time(0));
}
int roll(){ return rand()%3;}


#endif /* Dice_hpp */
