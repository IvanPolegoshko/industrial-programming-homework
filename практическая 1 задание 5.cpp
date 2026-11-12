#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {3, 0, 5, 1, 4}; // Пропущено число 2
    
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    
    int missing = expected_sum - actual_sum;
    cout << "Недостающее число: " << missing << endl;
    
    return 0;
}