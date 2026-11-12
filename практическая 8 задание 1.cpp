#include <iostream>

using namespace std;

// Функция быстрого возведения числа base в степень n
long long fast_pow(long long base, long long n) {
    long long result = 1;
    while (n > 0) {
        // Если степень нечётная, умножаем результат на текущее основание
        if (n % 2 == 1) {
            result = result * base;
        }
        // Возводим основание в квадрат и делим степень на 2
        base = base * base;
        n = n / 2;
    }
    return result;
}

int main() {
    long long base, n;
    if (cin >> base >> n) {
        cout << fast_pow(base, n) << endl;
    }
    return 0;
}