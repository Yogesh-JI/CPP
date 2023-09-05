#include <iostream>

using namespace std;

class Money {
private:
    int rupee;
    int paisa;

public:
    Money() {
        rupee = 0;
        paisa = 0;
    }

    Money(int r, int p) {
        rupee = r;
        paisa = p;
    }

    // Getter methods
    int getRupee() const {
        return rupee;
    }

    int getPaisa() const {
        return paisa;
    }

    // Setter methods
    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {
        paisa = p;
    }

    // Function to add two Money objects
    Money add(const Money& other) {
        int totalRupee = rupee + other.rupee;
        int totalPaisa = paisa + other.paisa;
        
        if (totalPaisa >= 100) {
            totalRupee += totalPaisa / 100;
            totalPaisa %= 100;
        }
        
        return Money(totalRupee, totalPaisa);
    }
};

int main() {
    int rupee1, paisa1, rupee2, paisa2;
    
    cin >> rupee1 >> paisa1;
    cin >> rupee2 >> paisa2;
    
    Money money1(rupee1, paisa1);
    Money money2(rupee2, paisa2);
    
    Money total = money1.add(money2);
    
    cout << total.getRupee() << "." << (total.getPaisa() < 10 ? "0" : "") << total.getPaisa() << endl;
    
    return 0;
}
