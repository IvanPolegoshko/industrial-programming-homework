#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x >= 3000) { cout << "MMM"; x -= 3000; }
    else if (x >= 2000) { cout << "MM"; x -= 2000; }
    else if (x >= 1000) { cout << "M"; x -= 1000; }

    if (x >= 900) { cout << "CM"; x -= 900; }
    else if (x >= 500) { cout << "D"; x -= 500; }
    else if (x >= 400) { cout << "CD"; x -= 400; }

    if (x >= 300) { cout << "CCC"; x -= 300; }
    else if (x >= 200) { cout << "CC"; x -= 200; }
    else if (x >= 100) { cout << "C"; x -= 100; }

    if (x >= 90) { cout << "XC"; x -= 90; }
    else if (x >= 50) { cout << "L"; x -= 50; }
    else if (x >= 40) { cout << "XL"; x -= 40; }

    if (x >= 30) { cout << "XXX"; x -= 30; }
    else if (x >= 20) { cout << "XX"; x -= 20; }
    else if (x >= 10) { cout << "X"; x -= 10; }

    if (x == 9) { cout << "IX"; }
    else if (x == 8) { cout << "VIII"; }
    else if (x == 7) { cout << "VII"; }
    else if (x == 6) { cout << "VI"; }
    else if (x == 5) { cout << "V"; }
    else if (x == 4) { cout << "IV"; }
    else if (x == 3) { cout << "III"; }
    else if (x == 2) { cout << "II"; }
    else if (x == 1) { cout << "I"; }

    cout << "\n";
    return 0;
}