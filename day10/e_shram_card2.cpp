#include <iostream>
#include <string>

using namespace std;

struct EshramCard {
    string name;
    string dob;
    string category;
    string aadhaar;
};

void displayCard(const EshramCard &card) {
    cout << "\n---- E-SHRAM CARD ----\n";
    cout << "Name: " << card.name << endl;
    cout << "Date of Birth: " << card.dob << endl;
    cout << "Category: " << card.category << endl;
    cout << "Aadhaar Number: " << card.aadhaar << endl;
    cout << "----------------------\n";
}

int main() {
    EshramCard card;
    int choice;

    cout << "Enter Name: ";
    getline(cin, card.name);
    
    cout << "Enter Date of Birth (DD/MM/YYYY): ";
    cin >> card.dob;
    
    cout << "Enter Aadhaar Number: ";
    cin >> card.aadhaar;
    
    cout << "Choose Category:\n1. Unorganized Worker\n2. Daily Wage Worker\n3. Street Vendor\nEnter choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: card.category = "Unorganized Worker"; break;
        case 2: card.category = "Daily Wage Worker"; break;
        case 3: card.category = "Street Vendor"; break;
        default: card.category = "Unknown"; break;
    }

    displayCard(card);

    return 0;
}