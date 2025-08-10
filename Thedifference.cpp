#include <iostream>
using namespace std;

int main () {
     
    int num1 = 1; 
    int num2 = 2;
    int result = 3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 >= num2) {
        result = num1 - num2;
    } else {
        result = num2 - num1;
    }

    cout << "The difference is: " << result << endl;
    return 0;
}
