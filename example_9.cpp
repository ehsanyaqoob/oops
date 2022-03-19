/*Question #125025
in the game of contract bridge, each of four players is dealt 13 cards, 
thus exhausting the entire deck. modify the cardaray program given in chapter 7 arrays 
and strings (by robert lafore) after shuffling the deck, it deals four hands of 13 cards each.
 each of the four players’ hands should then be displayed.*/
#include <iostream>
#include <ctime>
#include <stack>
using namespace std;

enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
    int digit;
    Suit suit;

public:
    card() {}
    void set(int n, Suit s)
    {
        digit = n;
        suit = s;
    }
    void show();
};
void card::show()
{
    if (2 <= digit && digit <= 10)
        cout << digit;
    else
    {
        switch (digit)
        {
        case jack:
            cout << 'J';
            
            break;
        case queen:
            cout << 'Q';
            break;
        case king:
            cout << 'K';
            break;
        case ace:
            cout << 'A';
            break;
        }
    }
    switch (suit)
    {
    case clubs:
        cout << static_cast<char>(5);
        break;
    case diamonds:
        cout << static_cast<char>(4);
        break;
    case hearts:
        cout << static_cast<char>(3);
        break;
    case spades:
        cout << static_cast<char>(6);
        break;
    }
}
void ShowHand(stack<card>, string);
int main()
{
    card *deck = new card[52];
    for (int i = 0; i < 52; i++)
    {
        int digit = (i % 13) + 2;
        Suit suit = Suit(i / 13);
        deck[i].set(digit, suit);
    }
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        int random = rand() % 52;
        card temp = deck[i];
        deck[i] = deck[random];
        deck[random] = temp;
    }
    stack<card> FirstHand;
    stack<card> SecondHand;
    stack<card> ThirdHand;
    stack<card> FourthHand;
    int NumberOfHand = 1;
    for (int i = 0; i < 52; i++)
    {
        switch (NumberOfHand)
        {
        case 1:
            FirstHand.push(deck[i]);
            NumberOfHand++;
            break;
        case 2:
            SecondHand.push(deck[i]);
            NumberOfHand++;
            break;
        case 3:
            ThirdHand.push(deck[i]);
            NumberOfHand++;
            break;
        case 4:
            FourthHand.push(deck[i]);
            NumberOfHand = 1;
            break;
        }
    }
    delete[] deck;
    ShowHand(FirstHand, "FirstHand");
    ShowHand(SecondHand, "SecondHand");
    ShowHand(ThirdHand, "ThirdHand");
    ShowHand(FourthHand, "FourthHand");
    return 0;
}
void ShowHand(stack<card> hand, string HandNumber)
{
    cout << "\n"
         << HandNumber << ":\n";
    for (int i = 0; i < 13; i++)
    {
        card card = hand.top();
        card.show();
        hand.pop();
        cout << " ";
    }
    cout << "\n";
}
// for showing suits in console You might need to switch on "dotted font style"
// in console properties