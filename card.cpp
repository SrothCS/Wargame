//Sroth Sinha 
// Class (CECS 325-02)
// Project War  (Programming assignment 1)
// Due Date (02/15/2024)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program
#include "card.h"
#include<iostream>
#include<map>
using namespace std;

std::map<char, int> Card::rankValues = {
  {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14}   
};
Card::Card(char rank, char suit) : rank(rank), suit(suit) {}
void Card::display() const{ 
  std::cout << rank << suit;}
int Card::compare(const Card& other) const { 
 return Card::rankValues[rank] - Card::rankValues[other.rank];
}
#testing github

