// CECS325-sec2
// prog2
// c++
// Name: Krisha Hemani
//  Project Name: (Prog 2 – War Game)
//  Due Date: (Tue-Thu 02/15/2024)
//
//  I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.

// card.cpp
#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

Card::Card(char s, char r) {
  suit = s;
  rank = r;
}

/// @brief
/// @return
// string Card::display()
std::string Card::display() const {
  cout << rank << suit;
  // std::cout<<suit<<rank;
  string card;
  card += rank;
  card += suit;
  //cout << "22222222";
  return "";
}

int Card::compare(Card other) {
  // char rank1 = rank;
  // char rank2 = other.rank;
  // int rank1int;
  // int rank2int;

  char ranks[] = {'A', '2', '3', '4', '5', '6', '7',
                  '8', '9', 'T', 'J', 'Q', 'K'};

  int index1 = -1;
  for (int i = 0; i < 13; i++) {
    if (rank == ranks[i]) {
      index1 = i;
      break;
    }
  }
  int index2 = -1;
  for (int i = 0; i < 13; i++) {
    if (other.rank == ranks[i]) {
      index2 = i;
      break;
    }
  }

  if (index1 > index2) {
    return 1;
  } else if (index1 < index2) {
    return -1;
  } else {
    return 0;
  }
}
