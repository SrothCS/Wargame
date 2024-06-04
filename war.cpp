#include "deck.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string player1Name, player2Name;
    int player1Score = 0, player2Score = 0, ties = 0;
     
    
   
  

    
    std::cout << "Enter the name of the first player: ";
    getline(std::cin, player1Name);
    std::cout << "Enter the name of the second player: ";
    getline(std::cin, player2Name);
     
  
  Deck deck;
  std::cout<<"\nOriginal Deck" << endl;
  deck.display();
   
    deck.shuffle();
    std::cout << "Shuffled Deck" << endl;
    deck.display();

    
    for (int i = 0; i < 26; ++i) {
        std::cout << "\nGame " << (i + 1) << std::endl;
        std::cout << "----------" << std::endl;

        Card card1 = deck.deal(); 
        Card card2 = deck.deal();
       
        
        std::cout << player1Name << "=>" << card1.getRank() << card1.getSuit() << std::endl;
        std::cout << player2Name << "=>" << card2.getRank() << card2.getSuit() << std::endl;

        
        int comparison = card1.compare(card2);
        if (comparison > 0) {
            std::cout << player1Name << "=> Winner" << std::endl;
            player1Score++;
        } else if (comparison < 0) {
            std::cout << player2Name << "=> Winner" << std::endl;
            player2Score++;
        } else {
            std::cout << "It's a Tie" << std::endl;
            ties++;
        }
    }

    
    std::cout << "\n------Final Stats-------" << std::endl;
    std::cout << player1Name << " vs. " << player2Name << std::endl;
    std::cout << "Wins" << "\t" << player1Score << "\t\t" << player2Score << std::endl;
    std::cout << "Losses" << "\t" << (26 - player1Score - ties) << "\t\t" << (26 - player2Score - ties) << std::endl; 
    std::cout << "Ties" << "\t" << ties << "\t\t" << ties << std::endl;

    return 0;
}
