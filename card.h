#ifndef CARD_H
#define CARD_H

#include <iostream>
#include<map>

using namespace std;
class Card {
private:
  char rank;  // Helps with rank of card 
  char suit; // Helps with suit of card
         static std::map<char,int>rankValues;   //declaration for rank and values of the card

public: 
 Card(char r, char s); // using for declaring rank and suit 
char getRank() const { return rank; } // Getter for rank
char getSuit() const { return suit; } // Getter for suit
  void display() const; // helps to display the card
 int compare(const Card& other) const; // helps to compare two cards
};

#endif 


