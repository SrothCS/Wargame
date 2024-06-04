#ifndef DECK_H
#define DECK_H
#define DECK_H
#include "card.h" 
#include <vector>
using namespace std;
class Deck{
private:
std::vector<Card> cards;

public:
Deck();
Card deal();
void display() const;
void shuffle();
};
#endif 