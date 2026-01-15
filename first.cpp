#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Euclid's Algorithm
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "HCF = " << a << endl;

    return 0;
}
