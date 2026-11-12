#include <iostream>

using namespace std;

// Рекурсивная функция для перекладывания ингредиентов
// i - номер ингредиента, from - откуда, to - куда, buf - вспомогательная салфетка
void move_ingredients(int i, int from, int to, int buf) {
    if (i == 0) {
        return;
    }
    // Переносим i-1 ингредиент на вспомогательную салфетку
    move_ingredients(i - 1, from, buf, to);
    
    // Печатаем действие для текущего ингредиента
    cout << "Ingredient " << i << " move from " << from << " to " << to << endl;
    
    // Переносим i-1 ингредиент со вспомогательной на целевую салфетку
    move_ingredients(i - 1, buf, to, from);
}

int main() {
    int n;
    if (cin >> n) {
        // Перекладываем n ингредиентов с 1-й салфетки на 3-ю, используя 2-ю
        move_ingredients(n, 1, 3, 2);
    }
    return 0;
}