#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Введите количество рядов в мини-зале (1..5): ";
    if (!(cin >> rows) || rows < 1 || rows > 5) {
        cout << "Ошибка ввода" << endl;
        return 0;
    }

    int total_seats = 0;

    for (int r = 1; r <= rows; r++) {
        int seats_in_row;
        cout << "Ряд " << r << ". Введите количество мест (1..5): ";
        if (!(cin >> seats_in_row) || seats_in_row < 1 || seats_in_row > 5) {
            cout << "Ошибка ввода" << endl;
            return 0;
        }

        cout << "Схема ряда " << r << ": ";
        for (int s = 1; s <= seats_in_row; s++) {
            cout << "[ " << s << " ] ";
            total_seats++;
        }
        cout << endl;
    }

    cout << "\nОбщее количество мест во всем зале: " << total_seats << endl;
    return 0;
}
