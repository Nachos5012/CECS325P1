// CECS325-sec2
// prog2
// c++
// Name: Krisha Hemani
//  Project Name: (Prog 2 – War Game)
//  Due Date: (Tue-Thu 02/15/2024)
//
//  I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
// Deck.h

#ifndef DECK_H
#define DECK_H
// using namespace std;

#include "Card.h"
#include <vector>

class Deck {
private:
  std::vector<Card> cards;
  // const static

public:
  Deck();
  Card deal();
  void display();
  void shuffle();
};

#endif
