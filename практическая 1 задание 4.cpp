#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;
    int A[3] = {1, 4, 7};
    int B[4] = {2, 3, 6, 8};
    
    int i = 0; // Индекс для массива A
    int j = 0; // Индекс для массива B
    
    for (int k = 1; k <= a + b; k++) {
        // Если массив B закончился ИЛИ элемент в A меньше (или равен) элементу в B
        if (j >= b || (i < a && A[i] <= B[j])) {
            cout << A[i] << " ";
            i++;
        } else {
            cout << B[j] << " ";
            j++;
        }
    }
    
    return 0;
}