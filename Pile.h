#include "Card.h"
#include <vector>

vector<Card> v;

public Pile : public Deck() {
    public:
        void Pile() {
            
        }
}

int size() {
    return v.size();
}

Card operator[](int n) {
    return v[n];
}

void addToEnd(Card card) {
    v.push_back(card);
}

void remove(int pos) {
    v.remove(pos);
}