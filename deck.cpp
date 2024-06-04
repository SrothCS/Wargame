#include "deck.h"
#include <vector>
#include <cstdlib>  // For std::rand()
#include <iostream> // For std::cout and std::endl
using namespace std;  // Using the std namespace
// Assuming the Card class has a constructor that takes 'rank' and 'suit'.
// For example: Card::Card(char r, char s) : rank(r), suit(s) {}

// Constructor to populate the deck with 52 standard playing cards
Deck::Deck() {
    const char suits[] = {'C', 'S', 'D', 'H'};
    const char ranks[] = {'A','2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    for (char suit : suits) {
        for (char rank : ranks) {
            cards.push_back(Card(rank, suit)); // Add a new card to the deck
        }
    }
}

// Shuffle the deck
void Deck::shuffle() {
    for (size_t i = 0; i < cards.size(); i++) {
        int j = std::rand() % cards.size(); // Generate a random position
        std::swap(cards[i], cards[j]); // Swap the current card with the card at position j
    }
}

// Deal a card from the deck
Card Deck::deal() {
    if (cards.empty()) {
        std::cout << "Deck is empty!" << std::endl;
        // In a real application, you might want to handle this case more gracefully
        return Card('0', '0'); // Return a placeholder card
    }
    Card dealtCard = cards.back(); // Get the last card
    cards.pop_back(); // Remove the last card from the deck
    return dealtCard; // Return the dealt card
}

// Display all cards in the deck
void Deck::display() const {
    int count = 0;
  for (const Card& card : cards) {
      if (card.getRank() == 'T') {
        std::cout << "10" << card.getSuit() << " ";
      }
      else {
        std::cout << card.getRank() << card.getSuit() << " "; // 
        //Adjusted for Card
      }
      if ((count + 1) % 13 == 0) {
        std::cout << std::endl;
      }
      
      count += 1;
      
    }
    std::cout << std::endl;
}
