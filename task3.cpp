#include <iostream>

using namespace std;

int main() {
    int row, seat;

    do {
        cout << "Введите ряд (1..12) и место (1..20) через пробел: ";
        if (!(cin >> row >> seat)) {
            cout << "Ошибка ввода данных." << endl;
            cin.clear();
            while (cin.get() != '\n'); 
            row = 0; seat = 0; 
        }
    } while (row < 1 || row > 12 || seat < 1 || seat > 20);

    cout << "\nКоординаты успешно приняты!" << endl;
    cout << "Ряд: " << row << ", Место: " << seat << endl;

    int price = (row <= 4) ? 150 : 250;
    cout << "Вычисленная стоимость места: " << price << " руб." << endl;

    return 0;
}
