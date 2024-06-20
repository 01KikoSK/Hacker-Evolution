#include <iostream>
#include <string>

using namespace std;

// Game variables
int money = 1000;
int level = 1;
int experience = 0;

// Cheat menu functions
void addMoney(int amount) {
    money += amount;
    cout << "Money added: " << amount << endl;
}

void levelUp() {
    level++;
    cout << "Level up! You are now level " << level << endl;
}

void addExperience(int amount) {
    experience += amount;
    cout << "Experience added: " << amount << endl;
}

void showStats() {
    cout << "Money: " << money << endl;
    cout << "Level: " << level << endl;
    cout << "Experience: " << experience << endl;
}

int main() {
    int choice;

    while (true) {
        cout << "Hacker Evolution Cheat Menu" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Add money" << endl;
        cout << "2. Level up" << endl;
        cout << "3. Add experience" << endl;
        cout << "4. Show stats" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                int amount;
                cout << "Enter amount to add: ";
                cin >> amount;
                addMoney(amount);
                break;
            case 2:
                levelUp();
                break;
            case 3:
                int expAmount;
                cout << "Enter experience to add: ";
                cin >> expAmount;
                addExperience(expAmount);
                break;
            case 4:
                showStats();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Try again!" << endl;
        }
    }

    return 0;
}