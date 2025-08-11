#include <iostream>
using namespace std;
int main () {
    
    int n;
    int i = 1;
    long long f = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
    f = f * i;
    i = i + 1;

    if (i > n) {
        cout << "Factorial of " << n << " = " << f << endl;
    } else {
        while (i <= n) {
            f = f * i;
            i = i + 1;
        }
        cout << "Factorial of " << n << " = " << f << endl;
    }






    return 0;
}
