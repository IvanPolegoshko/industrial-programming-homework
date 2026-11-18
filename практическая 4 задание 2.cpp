#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    if (k < n * m && k > 0 && (k % n == 0 || k % m == 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}