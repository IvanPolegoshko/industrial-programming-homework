#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;
    int diff1 = d1 - d4;
    int diff2 = d2 - d3;
    cout << diff1 * diff1 + diff2 * diff2 + 1;
    return 0;
}