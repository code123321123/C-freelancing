#include "Card.h"
#include <set>
using std::cout;

set<Card> st;

public OrderList : public Pile() {
    public:
        void OrderList() {
            
        }
}

int getSize() {
    return st.size();
}

int add(Card card) {
    st.add(card);
}

void operator <<() {
    for(Card card: st) {
        cout << card << '\n';
    }
}