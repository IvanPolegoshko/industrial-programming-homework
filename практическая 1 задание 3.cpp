#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A; // Введите 0 или 1
    
    int B = 2 - A; // Если A=0 -> B=2; если A=1 -> B=1
    
    cout << "B = " << B << endl;
    return 0;
}