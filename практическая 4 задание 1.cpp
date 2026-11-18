#include <iostream>
using namespace std;

int main() {
    long long a, b;
    char op;
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b << "\n";
            break;
        case '-':
            cout << a - b << "\n";
            break;
        case '*':
            cout << a * b << "\n";
            break;
        case '/':
            if (b != 0) {
                cout << (double)a / b << "\n";
            } else {
                cout << "Error: division by zero\n";
            }
            break;
        default:
            cout << "Unknown operation\n";
    }

    return 0;
}