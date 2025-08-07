#include <iostream>
using namespace std;

int main() {
    int room;

    do {
        cout << "Enter room number (1, 2, or 3): ";
        cin >> room;

        switch (room) {
            case 1:
                cout << "Entered successfully" << endl;
                break;
            case 2:
            case 3:
                cout << "Invalid room" << endl;
                break;
            default:
                cout << "Invalid room" << endl;
                break; 
        }

    } while (room != 1); // Loop until room 1 is entered

    return 0;
}
