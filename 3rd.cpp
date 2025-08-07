#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
    
    srand(static_cast<unsigned int>(time(nullptr)));
    int secret = rand() % 100 + 2;
    int guess;
    cout << "Guess the number(1-100):\n";
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < secret) {
            cout << "Too low! Try again.\n";
        } else if (guess > secret) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "CONGRATULATIONS! You guessed the right number.\n";
        }
    } while (guess != secret);
    return 0; }
/*  
/#include <iostream>
/#include <string>
/using namespace std;


int main() {
    
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if(age < 18) {
    cout << "You're a minor\n";
    }
    else if(age >= 18 && age < 60) {
        cout << "You're a adult";
    }
    else {
        cout << "You're a senior";
    }
    return 0;
}
*/

    
    
