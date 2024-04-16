// CECS325-sec2
// prog2
// c++
// Name: Krisha Hemani
//  Project Name: (Prog 2 – War Game)
//  Due Date: (Tue-Thu 02/15/2024)
//
//  I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
// card.h
#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
private:
  char suit;
  char rank;

public:
  Card(char suit, char rank);
  // void display();
  std::string display() const;

  // string display();
  int compare(Card);
};

#endif
