#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 5;
    
    a = a + b; // a становится 9
    b = a - b; // b становится 4
    a = a - b; // a становится 5
    
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}