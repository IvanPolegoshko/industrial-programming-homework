#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long fact = 1; // Текущий факториал (i!)
    long long F = 1;    // Общее произведение
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
        F = F * fact;
    }
    
    cout << F << endl;
    return 0;
}